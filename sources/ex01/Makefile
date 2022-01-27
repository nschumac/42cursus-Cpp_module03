NAME = ScavTrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

FLAGS = -Wall -Werror -Wextra -o

all: $(NAME)

$(NAME):
	clang++ $(SRC) $(FLAGS) $@

fclean:
	rm -rf $(NAME)

clean:

re: fclean $(NAME)