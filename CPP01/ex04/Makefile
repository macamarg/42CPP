NAME = sed

SRC =	main.cpp\
		Sed.cpp\

OBJ= $(SRC:.cpp=.o)

WFLAGS = -Wall -Wextra -Werror

CFLAGS = -std=c++98

OPT = -g

CC = c++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(WFLAGS) $(CFLAGS) $(OPT) $^  -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re