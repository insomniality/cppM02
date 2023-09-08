SRCS	=	$(shell find . -name "*.cpp")

OBJS	=	${SRCS:.cpp=.o}

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror # defalt bana cxxflags-@

NAME	=	prog

all: $(NAME)

$(NAME): $(OBJS)
	c++ -std=c++98 -Wall -Wextra -Werror $(OBJS) -o $(NAME)
clean:
	rm -f ${OBJS} 
fclean:	clean
	rm -f $(NAME)
re:	fclean	all

.PHONY:	all clean fclean re