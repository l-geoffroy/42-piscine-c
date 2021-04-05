NAME = ft_cat
SRCS = ft_cat.c
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

.PHONY: all clean fclean
