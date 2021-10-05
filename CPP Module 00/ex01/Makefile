NAME	=	phonebook

CC		=	clang++

FLAG	=	-c		\
			-Wall	\
			-Wextra	\
			-Werror	\
			-std=c++98

RM		=	@/bin/rm -rf

SRCS	=	./*.cpp
OBJS 	=	$(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $@ $^

$(OBJS): $(SRCS)
	$(CC) $(FLAG) -I *.hpp -c $(SRCS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re