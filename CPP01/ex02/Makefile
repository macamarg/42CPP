NAME = brain

SRC =	main.cpp\

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OPT = -g

CXX = c++

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) $(OPT) $^  -o $@

clean:
	rm -f $(NAME)

re: clean all

.PHONY: clean all re