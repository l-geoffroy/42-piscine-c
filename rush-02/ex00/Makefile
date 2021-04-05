NAME = rush-02

SRCS = src/main.c src/ft_util.c src/ft_core.c src/ft_validate.c

OBJS = ${SRC:.c=.o}

FLAGS = -Wall -Werror -Wextra -g3 -fsanitize=address

CC = gcc

all:	${NAME}

${NAME}: ${OBJS}
	${CC} -o ${NAME} ${SRCS} -I includes ${FLAGS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

re-sanitize: fclean
	${CC} -o ${NAME} ${SRCS} -I includes ${FLAGS} -g3 -fsanitize=address

.PHONY: all clean fclean re
