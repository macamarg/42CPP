NAME = globalbanksters

SRC =	Account.cpp\
		tests.cpp\

OBJ= $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OPT = -g

CXX = c++

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OPT) $^  -o $@
	./$(NAME) > tests.log

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f tests.log

re: fclean all

.PHONY: clean fclean all re
