CC			=gcc

CFLAGS		=-Wall -Wextra -Werror -Iincludes

SRCS		=./srcs/ft_putchar.c\
			./srcs/ft_swap.c\
			./srcs/ft_putstr.c\
			./srcs/ft_strlen.c\
			./srcs/ft_strcmp.c
			
OBJS		=${SRCS:.c=.o}
NAME		=libft.a
HEADERS		=includes/ft.h

${NAME}: ${HEADERS} ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
