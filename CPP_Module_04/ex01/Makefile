NAME	=	animal_brains

CC		=	g++

FLAG	=	-c				\
			-Wall			\
			-Wextra			\
			-Werror			\
			-Wshadow		\
			-Wno-Shadow		\
			-Wfatal-errors	\
			-std=c++98

SANIT	=	-fsanitize=address

RM		=	@/bin/rm -rf

SRCS	=	main.cpp		\
			zeroZero.cpp	\
			zeroUm.cpp		\
			Animal.cpp	\
			Dog.cpp	\
			Cat.cpp	\
			Brain.cpp	\
			WrongAnimal.cpp	\
			WrongCat.cpp
OBJS 	=	$(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(SANIT) -o $@ $^

$(OBJS): $(SRCS)
	$(CC) $(FLAG) -c $(SRCS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re