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
        print_final(ok, function_name, i, test_length, test_case, expected, result, return_value)

def print_final(ok: str, test_name: str, current_index: int, test_length: int, case, expected, result, return_value) -> None:
    ok = "✅" if expected == result else "❌"
    if return_value == ctypes.c_int or return_value == bool:
        display = display_char(case)
        int_val = ord(case) if isinstance(case, str) else case
        print(f"{ok} {test_name} {current_index+1}/{test_length}: char={display} (int={int_val}) → Expected {expected} got {result}")
    else:
        print(f"{ok} {test_name} {current_index+1}/{test_length}: case={case} → Expected {expected} got {result}")

def display_char(c):
    if isinstance(c, int):
        try:
            c = chr(c)
        except ValueError:
            return f"non-valid({c})"
    escape = {'\n': '\\n', '\t': '\\t', '\0': '\\0', ' ': "' '"}
    return escape.get(c, f"'{c}'" if 32 <= ord(c) <= 126 else f"non-printable({ord(c)})")



