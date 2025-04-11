#!/bin/bash

clear

functions=(
memset bzero memcpy memccpy memmove memchr memcmp strlen strdup strcpy strncpy
strcat strncat strlcat strchr strrchr strstr strnstr strcmp strncmp atoi
isalpha isdigit isalnum isascii isprint toupper tolower
)
missing=0
echo "Checking for required function files..."
for func in "${functions[@]}"; do
    sleep 0.3
    if [ ! -f "../libft/ft_${func}.c" ]; then
        echo "❌ Missing: ft_${func}.c"
        missing=1
    fi
done
if [ $missing -eq 0 ]; then
    echo "✅ All required function files are present."
fi
sleep 1
echo ""
echo "--------------------------------------"
echo ""
make
echo ""
echo "--------------------------------------"
echo "Running tests..."
sleep 2
echo ""
./test_libft
echo ""
echo "--------------------------------------"
echo ""
echo "Tests finished."
