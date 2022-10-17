NAME 	= Fixed

SRC 	=  	main.cpp \
		Fixed.cpp \

OBJ 	= $(patsubst %.cpp,%.o,$(SRC))

CFLAGS	= -Wall -Wextra -Werror

CSTD	= -std=c++98

HEADER  = Fixed.hpp

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CFLAGS) $(CSTD) $(OBJ) -o $@

%.o: %.cpp Makefile $(HEADER)
	c++ $(CFLAGS) $(CSTD) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
