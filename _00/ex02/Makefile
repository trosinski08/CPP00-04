# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 21:06:37 by trosinsk          #+#    #+#              #
#    Updated: 2024/10/03 00:35:03 by trosinsk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:.cpp=.o)
INC = Account.hpp
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all