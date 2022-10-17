NAME 	= Violence

SRC 	= 	HumanA.cpp \
		main.cpp \
		HumanB.cpp \
		Weapon.cpp

OBJ 	= $(patsubst %.cpp,%.o,$(SRC))

CFLAGS	= -Wall -Wextra -Werror

CSTD	= -std=c++98

HEADER	= 	HumanA.hpp \
		HumanB.hpp \
		Weapon.hpp

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
