NAME = amateria

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRC = AMateria.cpp \
      Ice.cpp \
      Cure.cpp \
      Character.cpp \
      MateriaSource.cpp \
      main.cpp
HEADERS = AMateria.hpp \
		  Ice.hpp \
		  Cure.hpp \
		  ICharacter.hpp \
		  Character.hpp \
		  IMateriaSource.hpp \
		  MateriaSource.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all