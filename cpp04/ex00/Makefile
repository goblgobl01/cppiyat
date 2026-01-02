NAME = program

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Cat.cpp Dog.cpp Animal.cpp
OBJ = $(SRC:%.cpp=obj/%.o)

all: $(NAME)

$(NAME): $(OBJ) Cat.hpp Dog.hpp Animal.hpp
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

obj/%.o: %.cpp
	mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re