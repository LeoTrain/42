#!/bin/bash

display_single_separator() {
	echo ""
}

display_big_separator() {
	echo ""
	echo "--------------------------------------"
	echo ""
}

check_missing_functions() {
	functions=(
	memset bzero memcpy memccpy memmove memchr memcmp strlen strdup strcpy strncpy
	strcat strncat strlcat strchr strrchr strstr strnstr strcmp strncmp atoi
	isalpha isdigit isalnum isascii isprint toupper tolower
	)
	missing=0
	echo "	Checking for required function files..."
	for func in "${functions[@]}"; do
		if [ ! -f "../libft/ft_${func}.c" ]; then
			echo "❌ Missing: ft_${func}.c"
			missing=1
		fi
	done
	if [ $missing -eq 0 ]; then
		echo "✅ All required function files are present."
	fi
	sleep 3
}

check_norm() {
	echo "	Checking Norm"
	source ~/env/bin/activate
	results=$(norminette ../libft/)
	if echo "$results" | grep -q "KO"; then
		echo "❌ Norm Failed"
		echo "$results" | grep "KO"
	else
		echo "✅ Norm passed"
	fi
	sleep 3
}

build_test() {
    echo "    Building the tests"
    cd ../libft/
    if make -n | grep -q "Nothing to be done"; then
        echo "✅ LIBFT buildt"
    else
        make
        if [ $? -ne 0 ]; then
            echo "❌ LIBFT BUILD FAILED"
            return 1
        fi
    fi
    cd ../tests/
    if make -n | grep -q "Nothing to be done"; then
        echo "✅ TESTS buildt"
    else
        make
        if [ $? -ne 0 ]; then
            echo "❌ TESTS BUILD FAILED"
            return 1
        fi
    fi
    sleep 3
}

run_test() {
	echo "Running the tests..."
	./test_libft
	sleep 3
}

main() {
	clear
	echo "Starting the test script..."
	sleep 2

	display_big_separator
	check_missing_functions

	display_big_separator
	check_norm

	display_big_separator
	build_test

	display_big_separator
	run_test
}

main
