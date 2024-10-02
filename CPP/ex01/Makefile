NAME = phonebook

HEADERS = ./PhoneBook.hpp \
		./Contact.hpp

INCLUDES = -I./ $(HEADERS)

SRCS = ./PhoneBook.cpp \
		./Contact.cpp \
		./main.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
re: fclean all

