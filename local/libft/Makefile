FINAL = libft.a
SRCS = ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_atoi.c \
		ft_strcmp.c ft_strncmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c \
		ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_memset.c ft_bzero.c
OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror
LIB = libft.h

all: $(FINAL)

$(FINAL): $(OBJS)
	ar rc $(FINAL) $(OBJS)

%.o: %.c
	cc $(FLAGS) -g -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(FINAL)

re: fclean all