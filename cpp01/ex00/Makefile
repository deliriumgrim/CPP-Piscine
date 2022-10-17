NAME 	= Zombie

SRC 	= 	newZombie.cpp \
		randomChump.cpp \
		main.cpp \
		Zombie.cpp

OBJ 	= $(patsubst %.cpp,%.o,$(SRC))

CFLAGS	= -Wall -Wextra -Werror

CSTD	= -std=c++98

HEADER	= 	Zombie.hpp 

all: $(NAME)

$(NAME): $(OBJ) 
	c++ $(CFLAGS) $(CSTD) $(OBJ) -o $@

%.o: %.cpp $(HEADER) Makefile
	c++ $(CFLAGS) $(CSTD) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
