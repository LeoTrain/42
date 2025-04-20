import ctypes
from typing import List
from function_enum import Functions
from dicks import functions_dick, test_cases


class LibComparator:
    def __init__(self, lib_path: str) -> None:
        self.lib = ctypes.CDLL(lib_path)
        self.lib.strstr.restype = ctypes.c_char_p
        self.lib.strnstr.restype = ctypes.c_char_p
        self.lib.strlcat.restype = ctypes.c_char_p
        self.lib.strncat.restype = ctypes.c_char_p
        self.lib.strcat.restype = ctypes.c_char_p

    def test_func(self, function: Functions, test_cases: List) -> None:
        self.current_function_name = function.name
        self.current_function = functions_dick[function]
        self.current_real_method = getattr(self.lib, self.current_function["real"])
        self.current_method = getattr(self.lib, self.current_function["ft"])
        is_bool = False
        args = self.current_function["parameters"]
        res = self.current_function["return_value"]
        if res == bool:
            res = ctypes.c_int
            is_bool = True
        self.current_method.argtypes = args
        self.current_method.restype = res
        test_length = len(test_cases)
        for i, case in enumerate(test_cases):
            self._test_function(i, test_length, case, is_bool)

    def test_all(self) -> None:
        for key in functions_dick.keys():
            print(key)
            self.test_func(key, test_cases[key])

    def _test_function(self, i, test_length, test_case, is_bool) -> None:
        args = self._prepare_test_case(test_case)
        self._expected = self.current_real_method(*args)
        self._result = self.current_method(*args)

        if is_bool:
            self._expected = bool(self._expected)
            self._result = bool(self._result)
        elif self._buffers:
            self._result = self._buffers[0].value

        self._print_result(i, test_length, test_case)

    def _prepare_test_case(self, args):
        if not isinstance(args, tuple):
            args = (args,)
        prepared_args = []
        self._buffers = []
        for arg in args:
            if isinstance(arg, bytearray):
                buf = ctypes.create_string_buffer(bytes(arg))
                prepared_args.append(buf)
                self._buffers.append(buf)
            else:
                prepared_args.append(arg)
        return tuple(prepared_args)

    def _print_result(self, current_index: int, test_length: int, case) -> None:
        ok = "✅" if self._expected == self._result else "❌"
        display = self._display_char(case)
        try:
            int_val = ord(case) if isinstance(case, str) else case
        except Exception:
            int_val = "?"
        print(f"{ok} {self.current_function_name} {current_index+1}/{test_length}: char={display} (int={int_val}) → Expected {self._expected} got {self._result}")

    def _display_char(self, c):
            if isinstance(c, bytes) or isinstance(c, tuple):
                return c
            try:
                c = chr(c)
            except ValueError:
                return f"non-valid({c})"
            except Exception as e:
                return f"ERROR: {e}"
            escape = {'\n': '\\n', '\t': '\\t', '\0': '\\0', ' ': "' '"}
            return escape.get(c, f"'{c}'" if 32 <= ord(c) <= 126 else f"non-printable({ord(c)})")
