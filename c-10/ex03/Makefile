NAME = ft_hexdump
SRCS = ft_hexdump.c ft_utils.c ft_stdin.c
OBJS = ${SRC:.c=.o}
FLAGS = -Wall -Werror -Wextra
CC = gcc

all:	${NAME}

${NAME}: ${OBJS}
	${CC} -o ${NAME} ${SRCS} ${FLAGS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean
