import ctypes
from os import name
from typing import List
from enum import Enum
from test_function import test_function
from function_enum import Functions
from dicks import functions_dick, test_cases


class LibComparator:
    def __init__(self, lib_path: str) -> None:
        self.lib = ctypes.CDLL(lib_path)

    def test_func(self, function: Functions, test_cases: List) -> None:
        func = functions_dick[function]
        real = getattr(self.lib, func["real"])
        ft = getattr(self.lib, func["ft"])
        is_bool = False
        res = func["return_value"]
        if res == bool:
            args = ctypes.c_int
            is_bool = True
        ft.argtypes = func["parameters"]
        ft.restype = res
        test_length = len(test_cases)
        for i, case in enumerate(test_cases):
            test_function(function.name, real, ft, i, test_length, case, is_bool)

    def test_all(self) -> None:
        for key in functions_dick.keys():
            print(key)
            self.test_func(key, test_cases[key])

def main():
    comparator = LibComparator('../libft/libft.so')
    comparator.test_all()
    # func = Functions.STRCMP
    # comparator.test_func(func, test_cases[func])

if __name__ == "__main__":
    main()

