NAME = megaphone

SRC =	megaphone.cpp\

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

teste:
	./$(NAME)
	./$(NAME) "shhhhh... I think the students are asleep..."
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."

.PHONY: clean fclean all re
