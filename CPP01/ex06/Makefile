NAME = harlFilter

SRC =	main.cpp\
		Harl.cpp\

OBJ= $(SRC:.cpp=.o)

WFLAGS = -Wall -Wextra -Werror

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

re: fclean $(NAME)

.PHONY: clean fclean all re