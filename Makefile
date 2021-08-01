SRCS	= ft_printf.c counters.c flags.c len.c octal.c parsing.c \
		precision.c spec.c specifier_display.c \
		specifier_display2.c struct_flags_display.c \
		struct_width_display.c utils.c width.c \
		precision_display.c flags_display.c

OBJS	= ${SRCS:.c=.o}

NAME	= ft_printf.a

AR		= ar rcs

CFLAGS	= -Wall -Werror -Wextra
CC		= gcc

RM		= rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re