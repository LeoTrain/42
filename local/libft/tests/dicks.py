import ctypes
from function_enum import Functions

functions_dick = {
    Functions.TOLOWER: {"real": "tolower", "ft": "ft_tolower", "parameters": [ctypes.c_int], "return_value": ctypes.c_int},
    Functions.TOUPPER: {"real": "toupper", "ft": "ft_toupper", "parameters": [ctypes.c_int], "return_value": ctypes.c_int},
    Functions.ISPRINT: {"real": "isprint", "ft": "ft_isprint", "parameters": [ctypes.c_int], "return_value": bool},
}
