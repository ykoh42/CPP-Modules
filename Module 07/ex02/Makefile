SRCS		=	main.cpp\
			Array.cpp
			
OBJS		=	$(SRCS:.cpp=.o)
NAME		=	array
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
