FINAL = libft.a
SRCS = ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isalpha.c ft_isdigit.c ft_isalnum.c
OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror
LIB = libft.h

all: $(FINAL)

$(FINAL): $(OBJS)
	ar rc $(FINAL) $(OBJS)

%.o: %.c
	cc $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(FINAL)

re: fclean all

test: re
	cc $(FLAGS) test.c $(FINAL) -o test
	./test
