CC = gcc
FLAGS = -Wall -Werror -Wextra
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c
NAME = libft.a
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) libft.h
	ar rc $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

