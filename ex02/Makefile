# Nom de l'exécutable
NAME = array

# Fichiers source
SRC = main.cpp

# Fichiers objets (générés automatiquement à partir des sources)
OBJ = $(SRC:.cpp=.o)

# Compilateur
CXX = c++

# Options de compilation
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Règle par défaut (cible principale)
all: $(NAME)

# Règle pour construire l'exécutable
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

# Règle pour compiler les fichiers .cpp en .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Règle pour nettoyer les fichiers objets
clean:
	rm -f $(OBJ)

# Règle pour nettoyer les fichiers objets et l'exécutable
fclean: clean
	rm -f $(NAME)

# Règle pour nettoyer et reconstruire
re: fclean all

# Indication pour éviter les erreurs si les fichiers n'existent pas
.PHONY: all clean fclean re
