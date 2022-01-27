NAME = FragTrap 

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

FLAGS = -Wall -Werror -Wextra -o

all: $(NAME)

$(NAME):
	clang++ $(SRC) $(FLAGS) $@

fclean:
	rm -rf $(NAME)

clean:

re: fclean $(NAME)
