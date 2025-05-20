NAME = phonebook

SRC =	Contact.cpp\
		PhoneBook.cpp\
		main.cpp\

OBJ= $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OPT = -g

CXX = c++

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OPT) $^  -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

valgrind:
	valgrind --show-leak-kinds=all --leak-check=full ./$(NAME)

.PHONY: clean fclean all re
