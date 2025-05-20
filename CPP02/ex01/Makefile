NAME = fixed_01

SRC =	main.cpp\
		Fixed.cpp\

OBJ= $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OPT = -g

CXX = c++

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OPT) $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re