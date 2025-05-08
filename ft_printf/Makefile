NAME = test
CC = cc
LIB_PATH = ./code
LIB = $(LIB_PATH)/libftprintf.a

all: $(NAME)
	
$(NAME):
	$(MAKE) -C $(LIB_PATH)
	# $(CC) -I/usr/local/include test.c $(LIB) -lcriterion -L/usr/local/lib -o test
	$(CC) test.c $(LIB) -o test

clean:
	$(MAKE) -C $(LIB_PATH) clean

fclean: 
	rm -f $(NAME)
	$(MAKE) -C $(LIB_PATH) fclean

re: fclean t

t: $(NAME)
	./$(NAME)
