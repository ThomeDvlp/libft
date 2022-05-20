SRC		=	main.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c

OBJ		=	${SRC:.c=.o}

NAME	=	libft.a

CC		=	cc

FLAGS	=	-Wall -Wextra -Werror

.c.o:	
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}
		
${NAME}:	${OBJ}
	ar rcs ${NAME} ${OBJ}

all:	${NAME}

clean:	
	rm -f ${OBJ}

fclean:		clean
	rm -f ${NAME}	
	
re:		fclean all	
	
.PHONY:	all clean fclean re
