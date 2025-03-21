TARGET      = test_libft
CC          = cc
CFLAGS      = -Wall -Wextra -Werror

SRC_DIR     = src/
OBJ_DIR     = obj/
INCLUDES    = ../libft
LIBFT       = ../libft/libft.a

TEST_SOURCES = $(wildcard $(SRC_DIR)test_*.c)
TEST_OBJECTS = $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(TEST_SOURCES))

TEST_LIB    = test_libft.a

all: $(TARGET)

$(TARGET): main.c $(TEST_OBJECTS) $(LIBFT)
	$(CC) $(CFLAGS) -o $@ main.c $(TEST_OBJECTS) $(LIBFT) -I .

# Creating the test library 
$(TEST_LIB): $(TEST_OBJECTS)
	ar rcs $@ $(TEST_OBJECTS)

# Compiling the test files into object files
$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@ -I . -I $(INCLUDES)

# Creating obj directory if needed
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Compiling the libft
$(LIBFT):
	$(MAKE) -C ../libft

# Cleaning object files and test library
clean:
	rm -rf $(OBJ_DIR) $(TEST_LIB)

# Clean + remove the target
fclean: clean
	rm -f $(TARGET)

# Rebuilding the project
re: fclean all

# Executing the target
run: all
	./$(TARGET)
