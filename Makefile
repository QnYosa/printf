SRCS	= ft_printf.c counters.c flags.c len.c \
		precision.c spec.c specifier_display.c \
		specifier_display2.c struct_flags_display.c \
		struct_width_display.c utils.c width.c \
		precision_display.c flags_display.c minus.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

AR		= ar rcs

CFLAGS	= -Wall -Werror -Wextra
CC		= gcc

RM		= rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}


all:		${NAME}

bonus:		all

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus