FINAL = libft.a
SO_FINAL = libft.so
SRCS = ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_atoi.c \
		ft_strcmp.c ft_strncmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c \
		ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_memccpy.c ft_memmove.c ft_memchr.c
OBJS = $(SRCS:.c=.o)
SO_OBJS = $(SRCS:.c=.so.o)
FLAGS = -Wall -Wextra -Werror

all: $(FINAL)

$(FINAL): $(OBJS)
	ar rc $(FINAL) $(OBJS)

%.o: %.c
	cc $(FLAGS) -g -c $< -o $@

%.so.o: %.c
	cc $(FLAGS) -fPIC -c $< -o $@

$(SO_FINAL): $(SO_OBJS)
	cc -shared -o $(SO_FINAL) $(SO_OBJS)

so: $(SO_FINAL)

clean:
	rm -f $(OBJS) $(SO_OBJS)

fclean: clean
	rm -f $(FINAL) $(SO_FINAL)

re: fclean all
