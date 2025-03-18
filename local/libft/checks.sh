#!/bin/bash

functions=(
memset bzero memcpy memccpy memmove memchr memcmp strlen strdup strcpy strncpy
strcat strncat strlcat strchr strrchr strstr strnstr strcmp strncmp atoi
isalpha isdigit isalnum isascii isprint toupper tolower
)

missing=0

echo "Checking for required function files..."

for func in "${functions[@]}"; do
    if [ ! -f "ft_${func}.c" ]; then
        echo "❌ Missing: ft_${func}.c"
        missing=1
    fi
done

if [ $missing -eq 0 ]; then
    echo "✅ All required function files are present."
fi

echo ""
echo "--------------------------------------"
echo ""

echo ""
make re
echo ""
echo "Running tests..."
cc -Wall -Wextra -Werror -g main.c libft.a -o tests
echo ""
./tests
echo ""
echo "Tests finished."
echo "--------------------------------------"
echo ""

echo "Cleaning up..."
make fclean
rm tests