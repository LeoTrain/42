from lib_comparator import LibComparator
from function_enum import Functions
from dicks import test_cases

def main():
    comparator = LibComparator('../libft/libft.so')
    # comparator.test_all()
    func = Functions.ISALNUM
    comparator.test_func(func, test_cases[func])

if __name__ == "__main__":
    main()
