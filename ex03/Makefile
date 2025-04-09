NAME = ex03
ex03= ex03

SRC = 	main.cpp \
	AMateria.cpp \
	Cure.cpp \
	Ice.cpp \
	Character.cpp \
	MateriaSource.cpp

CXX = c++ 

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(ex03)

$(NAME): all 

$(ex03):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(ex03)
        
clean:
	rm -rf $(ex03)

re: fclean all 

fclean: clean

.PHONY: all fclean clean re
