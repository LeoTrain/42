import ctypes
from enum import Enum
import enum


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

    def signature_declarations(self) -> None:
        self.lib.ft_tolower.argtypes = [ctypes.c_int]
        self.lib.ft_tolower.restype = ctypes.c_int

        self.lib.ft_toupper.argtypes = [ctypes.c_char]
        self.lib.ft_toupper.restype = ctypes.c_char

        self.lib.ft_isprint.argtypes = [ctypes.c_char]
        self.lib.ft_isprint.restype = ctypes.c_int

        self.lib.ft_isascii.argtypes = [ctypes.c_char]
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
                print(f"{ok} TOLOWER {i}/{test_length}: char={case} (int={c}) → Expected {expected} got {result}")

    def test_toupper(self) -> None:
        assert self.lib.ft_toupper(ord('a')) == ord('A')
        assert self.lib.ft_toupper(ord('A')) == ord('A')
        assert self.lib.ft_toupper(ord('1')) == ord('1')
        assert self.lib.ft_toupper(ord('é')) == ord('É')
        assert self.lib.ft_toupper(ord('É')) == ord('É')

    def test_isprint(self) -> None:
        assert self.lib.ft_isprint(ord('A')) == 1
        assert self.lib.ft_isprint(9) == 0  # Tabulation
        assert self.lib.ft_isprint(ord(' ')) == 1
        assert self.lib.ft_isprint(ord('7')) == 1
        assert self.lib.ft_isprint(10) == 0  # Retour à la ligne

    def test_isascii(self) -> None:
        assert self.lib.ft_isascii(ord('A')) == 1
        assert self.lib.ft_isascii(200) == 0
        assert self.lib.ft_isascii(0) == 1
        assert self.lib.ft_isascii(127) == 1
        assert self.lib.ft_isascii(-1) == 0

    def test_atoi(self) -> None:
        assert self.lib.ft_atoi(b"42") == 42
        assert self.lib.ft_atoi(b"-42") == -42
        assert self.lib.ft_atoi(b"   42") == 42
        assert self.lib.ft_atoi(b"42   ") == 42
        assert self.lib.ft_atoi(b"42abc") == 42

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

def main():
    comparator = LibComparator('../libft/libft.so')
    comparator.only_one(Functions.TOLOWER)



if __name__ == "__main__":
    main()

