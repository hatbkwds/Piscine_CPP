NAME = hibrainthisishuman
SRC		=	Brain.class.cpp Human.class.cpp main.cpp
OBJ		=	$(SRC:.cpp=.o)
FLAGS	=	-Wall -Wextra -Werror
CC		=	g++

all: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) -o $@ -c $< $(FLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : re fclean clean all
