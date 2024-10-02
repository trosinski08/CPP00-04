NAME = megaphone
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): megaphone.cpp
	$(CC) $(FLAGS) megaphone.cpp -o $(NAME)

clean: 
	rm -f $(NAME)
	
fclean: clean

re: fclean all

.PHONY: all clean fclean re