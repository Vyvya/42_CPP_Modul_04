NAME = animalbrain
CXX = g++
FLAGS = -std=c++98
FLAGS += -Wall -Werror -Wextra
# FLAGS += -fsanitize=address
RM = rm -f

SRCS = main.cpp \
		Animal/Animal.cpp \
		Cat/Cat.cpp \
		Dog/Dog.cpp \
		Brain/Brain.cpp \
		WrongAnimal/WrongAnimal.cpp \
		WrongAnimal/WrongCat.cpp \
		WrongAnimal/WrongDog.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	$(CXX) -c $(FLAGS) $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re



