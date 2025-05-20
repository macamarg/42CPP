NAME = zombie

SRC =	Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp\
		main.cpp

OBJ= $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OPT = -g

CXX = c++

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OPT) $^ -o $@

clean:
	rm -f $(OBJ)

fclean:clean
	rm -f $(NAME)

re: clean all

valgrind: $(NAME)
	valgrind --show-leak-kinds=all --leak-check=full ./$(NAME)

.PHONY: clean fclean all re