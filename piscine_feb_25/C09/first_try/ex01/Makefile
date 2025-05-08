CCFLAGS = -Wall -Wextra -Werror
HEADERS = includes/ft.h
OFILES = srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o
SRCSDIR := srcs

.DEFAULT_GOAL all: libft.a

libft.a: $(OFILES)
	ar crs libft.a $(OFILES) $(HEADERS)

re: fclean all

.PHONY fclean: clean
	@if [ -n "$(wildcard libft.a)" ]; then \
		echo rm libft.a; \
		rm libft.a; \
	fi

clean:
	@if [ -n "$(wildcard $(OFILES))" ]; then \
		echo rm $(OFILES); \
		rm $(OFILES); \
	fi

(SRCSDIR)/%.o: $(SRCSDIR)/%.c
	gcc $(CCFLAGS) -c -o $@ $<
