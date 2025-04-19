import ctypes

def test_function(function_name, real, ft, i, test_length, test_case, return_value) -> None:
    expected = real(test_case)
    result = ft(test_case)
    if return_value == bool:
        expected = bool(expected)
        result = bool(result)
    ok = ""
    try:
        assert result == expected
    except Exception:
        ok = ""
    finally:
        print_final(ok, function_name, i, test_length, test_case, test_case, expected, result, return_value)

def print_final(ok: str, test_name: str, current_index: int, test_length: int, case, c, expected, result, return_value) -> None:
    if return_value == ctypes.c_int:
        print(f"{ok} {test_name} {current_index+1}/{test_length}: char={display_char(case)} (int={c}) → Expected {expected} got {result}")
    elif return_value == bool:
        print(f"{ok} {test_name} {current_index+1}/{test_length}: (int={c}) → Expected {expected} got {result}")
    else:
        print(f"Type not implemented")

def display_char(c):
    escape = {'\n': '\\n', '\t': '\\t', '\0': '\\0', ' ': "' '"}
    return escape.get(c, f"'{c}'" if 32 <= ord(c) <= 126 else f"non-printable({ord(c)})")



