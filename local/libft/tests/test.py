import ctypes
import enum
from enum import Enum
import re


class Functions(Enum):
    TOLOWER = 1
    TOUPPER = 2
    ISPRINT = 3
    ISASCII = 4
    ATOI = 5
    STRCMP = 6
    STRLEN = 7
    STRDUP = 8
    STRCPY = 9
    MEMMOVE = 10


class LibComparator:
    def __init__(self, lib_path: str) -> None:
        self.lib = ctypes.CDLL(lib_path)
        self.signature_declarations()

    def only_one(self, function: Functions) -> None:
        if function == Functions.TOLOWER:
            self.test_tolower()
        elif function == Functions.TOUPPER:
            self.test_toupper()
        elif function == Functions.ISPRINT:
            self.test_isprint()
        elif function == Functions.ISASCII:
            self.test_isascii()
        elif function == Functions.ATOI:
            self.test_atoi()

    def test_all(self) -> None:
        self.test_tolower()
        self.test_toupper()
        self.test_isprint()
        self.test_isascii()
        self.test_atoi()

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
            expected = result = ok = None
            try:
                expected = self.lib.tolower(c)
                result = self.lib.ft_tolower(c)
                assert result == expected
                ok = True
            except AssertionError:
                ok = False
            except Exception:
                ok = False
            finally:
                ok = "✅" if ok else "❌"
                self.print_final(ok, "TOLOWER", i,test_length, case, c, expected, result)

    def test_toupper(self) -> None:
        test_cases = [b'A', b'a', b'1', '+', 'E']
        test_length = len(test_cases)
        for i, case in enumerate(test_cases):
            c = ord(case)
            if c > 127: # if non-ASCII
                continue
            expected = result = ok = None
            try:
                expected = self.lib.toupper(c)
                result = self.lib.ft_toupper(c)
                assert result == expected
                ok = True
            except AssertionError:
                ok = False
            except Exception:
                ok = False
            finally:
                ok = "✅" if ok else "❌"
                self.print_final(ok, "TOUPPER", i, test_length, case, c, expected, result)

    def test_isprint(self) -> None:
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

    def print_final(self, ok: str, test_name: str, current_index: int, test_length: int, case, c, expected, result, is_ord: bool=True) -> None:
        if is_ord:
            print(f"{ok} {test_name} {current_index+1}/{test_length}: char={self.display_char(case)} (int={c}) → Expected {expected} got {result}")
        else:
            print(f"{ok} {test_name} {current_index+1}/{test_length}: (int={c}) → Expected {expected} got {result}")


def main():
    comparator = LibComparator('../libft/libft.so')
    comparator.only_one(Functions.ATOI)
    # comparator.test_all()



if __name__ == "__main__":
    main()

