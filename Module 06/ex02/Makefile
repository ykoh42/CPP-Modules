SRCS		=	main.cpp\
			A.cpp\
			B.cpp\
			C.cpp
			
OBJS		=	$(SRCS:.cpp=.o)
NAME		=	identify
CC		=	clang++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

$(NAME)		:	$(OBJS)
			$(CC) $(CFLAGS) $^ -o $@

all		:	$(NAME)

clean		:
			$(RM) $(OBJS)

fclean		:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY		:	all clean fclean re
