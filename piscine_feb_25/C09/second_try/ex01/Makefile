SRCSDIR = srcs/
HEADERS = includes/
SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS = ${addprefix $(SRCSDIR), $(SRC)}
OBJECTS = ${SRCS:.c=.o}
CCFLAGS = -Wall -Wextra -Werror
LIB = libft.a

all: $(LIB)

$(LIB): $(OBJECTS)
	ar rcs $(LIB) $(OBJECTS)

.c.o:
	gcc $(CCFLAGS) -c -I $(HEADERS) $< -o ${<:.c=.o}

re: fclean all

fclean: clean
	rm $(LIB)

clean:
	rm $(OBJECTS)

.PHONY: clean fclean re all
