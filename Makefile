SRCS	= ft_printf.c flags.c is_part.c precision.c specifier_display.c parsing.c \

OBJS	= ${SRCS:c=.o}

NAME	= ft_printf.a

AR		= ar rcs

CFLAGS	= -Wall -Werror -Wextra

CC		= gcc

RM		= rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=o}

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
	
re:			fclean all

.PHONY:		all clean fclean re