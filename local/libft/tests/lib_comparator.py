import ctypes
from typing import List
from test_function import test_function
from function_enum import Functions
from dicks import functions_dick, test_cases


class LibComparator:
    def __init__(self, lib_path: str) -> None:
        self.lib = ctypes.CDLL(lib_path)
        self.lib.strstr.restype = ctypes.c_char_p
        self.lib.strnstr.restype = ctypes.c_char_p

    def test_func(self, function: Functions, test_cases: List) -> None:
        func = functions_dick[function]
        real = getattr(self.lib, func["real"])
        ft = getattr(self.lib, func["ft"])
        is_bool = False
        args = func["parameters"]
        res = func["return_value"]
        if res == bool:
            res = ctypes.c_int
            is_bool = True
        ft.argtypes = args
        ft.restype = res
        test_length = len(test_cases)
        for i, case in enumerate(test_cases):
            test_function(function.name, real, ft, i, test_length, case, is_bool)

    def test_all(self) -> None:
        for key in functions_dick.keys():
            print(key)
            self.test_func(key, test_cases[key])
