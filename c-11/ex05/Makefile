NAME = do-op
RM = rm -f
CC = gcc 
FLAG = -c -Wall -Werror -Wextra
SRC = do_op.c ft_putnbr.c
OBJ = do_op.o ft_putnbr.o

all: $(NAME)

$(NAME):
	@$(CC) $(FLAG) $(SRC)
	@$(CC) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all