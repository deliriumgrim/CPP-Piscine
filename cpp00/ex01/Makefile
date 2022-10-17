NAME 	= PhoneBook

SRC 	= 	PhoneBook.cpp \
		Contact.cpp \
		main.cpp \

OBJ 	= $(patsubst %.cpp,%.o,$(SRC))

CFLAGS	= -Wall -Wextra -Werror

CSTD	= -std=c++98

HEADER	= 	PhoneBook.hpp \
		Contact.hpp

all: $(NAME)

$(NAME): $(OBJ) 
	g++ $(CFLAGS) $(CSTD) $(OBJ) -o $@

%.o: %.cpp $(HEADER) Makefile
	g++ $(CFLAGS) $(CSTD) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
