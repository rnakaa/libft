SRCS	=	ft_isalnum.c	\
			ft_isalpha.c	\
			ft_bzero.c		\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_memset.c		\
			ft_strlcat.c	\
			ft_strlcpy.c	\
			ft_strlen.c		

OBJS	=	$(SRCS:.c=.o)

CC	= cc

CFLAGS			= -Wall -Wextra -Werror

NAME	= libft.a

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:	
		rm -f $(OBJS)

fclean:	clean
		rm -rf $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
