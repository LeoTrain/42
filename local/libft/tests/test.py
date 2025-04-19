import ctypes
from os import name
from typing import List
from enum import Enum
from test_function import test_function
from function_enum import Functions
from dicks import test_cases


functions_dick = {
    Functions.TOLOWER: {"real": "tolower", "ft": "ft_tolower", "parameters": [ctypes.c_int], "return_value": ctypes.c_int},
    Functions.TOUPPER: {"real": "toupper", "ft": "ft_toupper", "parameters": [ctypes.c_int], "return_value": ctypes.c_int},
    Functions.ISPRINT: {"real": "isprint", "ft": "ft_isprint", "parameters": [ctypes.c_int], "return_value": bool},
}


class LibComparator:
    def __init__(self, lib_path: str) -> None:
        self.lib = ctypes.CDLL(lib_path)
        self.signature_declarations()

    def test_func(self, function: Functions, test_cases: List) -> None:
        func = functions_dick[function]
        real = getattr(self.lib, func["real"])
        ft = getattr(self.lib, func["ft"])
        test_length = len(test_cases)
        for i, case in enumerate(test_cases):
            c = ord(case)
            test_function(function.name, real, ft, i, test_length-1, c, func["return_value"])

    def test_all(self) -> None:
        for key in functions_dick.keys():
            print(key)
            self.test_func(key, test_cases[key])

    def only_one(self, function: Functions) -> None:
        if function == Functions.TOLOWER:
            self.test_tolower()
        elif function == Functions.TOUPPER:
            self.test_toupper()
        elif function == Functions.ISPRINT:
            self.test_isprint()
        elif function == Functions.ISASCII:
            self.test_isascii()
        elif function == Functions.ISALNUM:
            pass
        elif function == Functions.ISDIGIT:
            pass
        elif function == Functions.ISALPHA:
            pass
        elif function == Functions.ATOI:
            self.test_atoi()
        elif function == Functions.STRNCMP:
            pass
        elif function == Functions.STRCMP:
            pass
        elif function == Functions.STRNSTR:
            pass
        elif function == Functions.STRSTR:
            pass
        elif function == Functions.STRRCHR:
            pass
        elif function == Functions.STRCHR:
            pass
        elif function == Functions.STRLCAT:
            pass
        elif function == Functions.STRNCAT:
            pass
        elif function == Functions.STRCAT:
            pass
        elif function == Functions.STRNCPY:
            pass
        elif function == Functions.STRCPY:
            pass
        elif function == Functions.STRDUP:
            pass
        elif function == Functions.STRLEN:
            pass
        elif function == Functions.MEMCMP:
            pass
        elif function == Functions.MEMCHR:
            pass
        elif function == Functions.MEMMOVE:
            pass
        elif function == Functions.MEMCCPY:
            pass
        elif function == Functions.MEMCPY:
            pass
        elif function == Functions.BZERO:
            pass
        elif function == Functions.MEMSET:
            pass


    def signature_declarations(self) -> None:
        self.lib.ft_tolower.argtypes = [ctypes.c_int]
        self.lib.ft_tolower.restype = ctypes.c_int

        self.lib.ft_toupper.argtypes = [ctypes.c_int]
        self.lib.ft_toupper.restype = ctypes.c_int

        self.lib.ft_isprint.argtypes = [ctypes.c_int]
        self.lib.ft_isprint.restype = ctypes.c_int

        self.lib.ft_isascii.argtypes = [ctypes.c_int]
        self.lib.ft_isascii.restype = ctypes.c_int

        self.lib.ft_atoi.argtypes = [ctypes.c_char_p]
        self.lib.ft_atoi.restype = ctypes.c_int

        self.lib.ft_strcmp.argtypes = [ctypes.c_char_p, ctypes.c_char_p]
        self.lib.ft_strcmp.restype = ctypes.c_int

        self.lib.ft_strlen.argtypes = [ctypes.c_char_p]
        self.lib.ft_strlen.restype = ctypes.c_int

        self.lib.ft_strdup.argtypes = [ctypes.c_char_p]
        self.lib.ft_strdup.restype = ctypes.c_char_p

        self.lib.ft_strcpy.argtypes = [ctypes.c_char_p, ctypes.c_char_p]
        self.lib.ft_strcpy.restype = ctypes.c_char_p

        self.lib.ft_memmove.argtypes = [ctypes.c_void_p, ctypes.c_void_p, ctypes.c_size_t]
        self.lib.ft_memmove.restype = ctypes.c_void_p

    def test_tolower(self) -> None:
        test_cases = [b'A', b'a', b'1', '+', 'E']
        test_length = len(test_cases)
        for i, case in enumerate(test_cases):
            c = ord(case)
            if c > 127: # if non-ASCII
                continue
            ok = "✅" if test_function(self.lib.tolower, self.lib.ft_tolower, c) else "❌"
            self.print_final(ok, "TOLOWER", i,test_length, case, c, self.lib.tolower(c), self.lib.ft_tolower(c))

    def test_toupper(self) -> None:
        test_cases = [b'A', b'a', b'1', '+', 'E']
        test_length = len(test_cases)
        for i, case in enumerate(test_cases):
            c = ord(case)
            if c > 127: # if non-ASCII
                continue
            ok = "✅" if test_function(self.lib.toupper, self.lib.ft_toupper, c) else "❌"
            self.print_final(ok, "TOUPPER", i,test_length, case, c, self.lib.toupper(c), self.lib.ft_toupper(c))

    def test_isprint(self) -> None:
        test_cases = ['A', '\0', '1', '+', 'E', '\t']
        test_length = len(test_cases)
        for i, case in enumerate(test_cases):
            c = ord(case)
            if c > 127:
                continue
            ok = "✅" if test_function(self.lib.isprint, self.lib.ft_isprint, c) else "❌"
            self.print_final(ok, "ISPRINT", i,test_length, case, c, self.lib.isprint(c), self.lib.ft_isprint(c))
            expected = result = None
            try:
                expected = self.lib.isprint(c)
                result = self.lib.ft_isprint(c)
                assert bool(result) == bool(expected)
                ok = "✅"
            except Exception:
                ok = "❌"
            self.print_final(ok, "ISPRINT", i, test_length, case, c, bool(expected), bool(result))

    def test_isascii(self) -> None:
        test_cases = ['A', '\0', '1', '+', 'E', '\t']
        test_length = len(test_cases)
        for i, case in enumerate(test_cases):
            c = ord(case)
            if c > 127:
                continue
            expected = result = None
            try:
                expected = self.lib.isprint(c)
                result = self.lib.ft_isprint(c)
                assert bool(result) == bool(expected)
                ok = "✅"
            except Exception:
                ok = "❌"
            self.print_final(ok, "ISASCII", i, test_length, case, c, bool(expected), bool(result))

    def test_atoi(self) -> None:
        test_cases = ["-152", "++52", "42", "    42", " - 42", " "]
        test_length = len(test_cases)
        for i, case in enumerate(test_cases):
            c = case.encode('utf-8')
            expected = result = ok = None
            try:
                expected = self.lib.atoi(c)
                result = self.lib.ft_atoi(c)
                assert result == expected
                ok = True
            except Exception:
                ok = False
            finally:
                ok = "✅" if ok else "❌"
                self.print_final(ok, "ATOI", i, test_length, case, c, expected, result, False)


    def test_strcmp(self) -> None:
        assert self.lib.ft_strcmp(b"abc", b"abc") == 0
        assert self.lib.ft_strcmp(b"abc", b"abcd") < 0
        assert self.lib.ft_strcmp(b"abcd", b"abc") > 0
        assert self.lib.ft_strcmp(b"apple", b"banana") < 0
        assert self.lib.ft_strcmp(b"hello", b"hello") == 0

    def test_strlen(self) -> None:
        assert self.lib.ft_strlen(b"Hello") == 5
        assert self.lib.ft_strlen(b"") == 0
        assert self.lib.ft_strlen(b"123456789") == 9
        assert self.lib.ft_strlen(b"Test\n") == 5
        assert self.lib.ft_strlen(b"Hello, World!") == 13

    def test_strdup(self) -> None:
        result = self.lib.ft_strdup(b"Hello")
        assert result == b"Hello"
        assert self.lib.ft_strdup(b"") == b""
        result2 = self.lib.ft_strdup(b"abc")
        assert result2 == b"abc"

    def test_strcpy(self) -> None:
        dest = ctypes.create_string_buffer(100)
        assert self.lib.ft_strcpy(dest, b"Hello") == dest
        assert dest.value == b"Hello"

    def test_memmove(self):
        src = ctypes.create_string_buffer(b"123456")
        dest = ctypes.create_string_buffer(6)
        self.lib.ft_memmove(dest, src, 6)
        assert dest.value == b"123456"
        self.lib.ft_memmove(dest, src, 3)
        assert dest.value == b"123"

    def display_char(self, c):
        escape = {'\n': '\\n', '\t': '\\t', '\0': '\\0', ' ': "' '"}
        return escape.get(c, f"'{c}'" if 32 <= ord(c) <= 126 else f"non-printable({ord(c)})")



def main():
    comparator = LibComparator('../libft/libft.so')
    # comparator.only_one(Functions.TOUPPER)
    # comparator.test_func(Functions.ISPRINT, [b'A', b'a', b'1', '+', 'E'])
    comparator.test_all()



if __name__ == "__main__":
    main()

