NAME = push_swap

SRC = 	src/error.c \
		src/main.c \
		src/manage_stack.c \
		src/operation1.c \
		src/operation2.c \
		src/operation3.c \
		src/parse.c \
		src/sort.c \
		src/sort2.c \
		src/sort3.c \
		src/utils.c \
		src/ft_isdigit.c \

OBJ = ${SRC:.c=.o}
INCLUDE = include/push_swap.h

CC = gcc

RM = rm -f

FLAGS = -Wall -Wextra -Werror -g

all: ${NAME}

$(NAME): ${OBJ} ${INCLUDE}
	gcc -o $(NAME) ${OBJ}

.c.o:
	${CC} ${FLAGS} -o $@ -c $<

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all
