NAME = test_libft
HEADER = ../libft
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT = ../libft/libft.a
CTESTS = $(wildcard test_*.c)
OBJECTS = $(CTESTS:.c=.o)
TESTLIB = test_libft.a

all: $(NAME)

$(NAME): main.c $(OBJECTS) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) main.c $(OBJECTS) $(LIBFT) -I .

$(TESTLIB): $(OBJECTS)
	ar rcs $(TESTLIB) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I . -I $(HEADER)

$(LIBFT):
	$(MAKE) -C ../libft

clean:
	rm -f $(NAME) $(OBJECTS) $(TESTLIB)

re: clean all

run: all
	./$(NAME)