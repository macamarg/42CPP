NAME = globalbanksters

SRC =	Account.cpp\
		tests.cpp\

OBJ= $(SRC:.cpp=.o)

WFLAGS = -Wall -Wextra -Werror

CFLAGS = -std=c++98

OPT = -g

CC = c++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(WFLAGS) $(CFLAGS) $(OPT) $^  -o $@
	./$(NAME) > tests.log

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f tests.log

re: fclean all

.PHONY: clean fclean all re
