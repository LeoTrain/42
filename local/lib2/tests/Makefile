NAME = tlib.a
SOURCES = utils.c c_tests/t_isalpha.c c_tests/t_isdigit.c c_tests/t_isalnum.c c_tests/t_isascii.c c_tests/t_isprint.c c_tests/t_strlen.c c_tests/t_memset.c c_tests/t_bzero.c c_tests/t_memcpy.c c_tests/t_memmove.c c_tests/t_strlcpy.c c_tests/t_strlcat.c c_tests/t_toupper.c c_tests/t_tolower.c c_tests/t_strchr.c c_tests/t_strrchr.c c_tests/t_strncmp.c c_tests/t_memchr.c c_tests/t_memcmp.c c_tests/t_strnstr.c c_tests/t_atoi.c
OBJECTS = $(SOURCES:.c=.o)
FLAGS = -Wall -Wextra -Werror
FTLIB = ../libft/libft.a

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

%.o: %.c
	cc $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME) ./test_libft

re: fclean all

t: $(NAME)
	cc main.c $(NAME) $(FTLIB) -o test_libft && ./test_libft && make clean

