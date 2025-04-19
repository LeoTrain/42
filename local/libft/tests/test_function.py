
def test_function(function_name, real, ft, i, test_length, test_case, is_bool) -> None:
    expected = real(*test_case) if isinstance(test_case, tuple) else real(test_case)
    result = ft(*test_case) if isinstance(test_case, tuple) else ft(test_case)
    if is_bool:
        expected = bool(expected)
        result = bool(result)
    try:
        assert result == expected
    except AssertionError:
        pass
    finally:
        print_final(function_name, i, test_length, test_case, expected, result)

def print_final(test_name: str, current_index: int, test_length: int, case, expected, result) -> None:
    ok = "✅" if expected == result else "❌"
    display = display_char(case)
    int_val = ord(case) if isinstance(case, str) else case
    print(f"{ok} {test_name} {current_index+1}/{test_length}: char={display} (int={int_val}) → Expected {expected} got {result}")

def display_char(c):
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



