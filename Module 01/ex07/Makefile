SRCS		=	main.cpp
			
OBJS		=	$(SRCS:.cpp=.o)
NAME		=	replace
CC		=	clang++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -g3
RM		=	rm -f

$(NAME)		:	$(OBJS)
			$(CC) $(CFLAGS) $^ -o $@

all		:	$(NAME)

clean		:
			$(RM) $(OBJS)

fclean		:	clean
			$(RM) $(NAME) *.replace

re		:	fclean all

.PHONY		:	all clean fclean re
