CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
LIBFT_PATH = ./ft_libft
LIBFT_A = $(LIBFT_PATH)/libft.a
LIBFT_SRCS = $(wildcard $(LIBFT_PATH)/*.c)
SRCS = ft_printf.c
OBJS = $(SRCS:.c=.o) $(LIBFT_OBJS)
LIBFT_OBJS = $(LIBFT_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT_A)
	ar rcs $(NAME) $(OBJS)

$(LIBFT_A):
	$(MAKE) bonus -C $(LIBFT_PATH)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_PATH) fclean

re: fclean all
