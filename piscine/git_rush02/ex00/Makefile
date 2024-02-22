NAME	= rush-02

CC	= clang

CFLAGS	= -Wall -Wextra -Werror

SRC	= main.c srcs/ft_file_utilities.c srcs/ft_handle_error.c srcs/ft_print_number.c srcs/ft_utilities.c

OBJS	= ${SRC:.c=.o}

.c.o:
	 ${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	 ${CC} -o ${NAME} ${OBJS}

all:	 ${NAME}

clean:
	 rm -f ${OBJS}

fclean:	 clean
	 rm -f ${NAME}

re:	 fclean all

debug:
	cc -g main.c srcs/*.c

debug-clean:
	rm -f a.out main.o

.PHONY:	 all clean fclean re
