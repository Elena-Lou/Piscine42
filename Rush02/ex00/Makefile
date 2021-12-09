SRCS	= ft_putchar.c ft_putstr.c main.c ft_checkparams.c ft_checkstr.c ft_split.c ft_dicototab.c ft_print_number.c ft_print_million.c

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

CFLAGS = -Wall -Wextra -Werror

RM		= rm -f

${NAME} :	${OBJS}
		cc ${CFLAGS} -o ${NAME} ${SRCS}

all :	${NAME}

clean :
		${RM} ${OBJS}

fclean :	clean
		${RM} ${NAME}

re :	fclean all
