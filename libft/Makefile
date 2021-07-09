SRCS	=	ft_atoi.c ft_putchar_fd.c ft_strnstr.c ft_bzero.c \
ft_putendl_fd.c ft_strrchr.c ft_calloc.c ft_putnbr_fd.c ft_strtrim.c \
ft_isalnum.c ft_putstr_fd.c ft_substr.c ft_isalpha.c ft_strchr.c \
ft_tolower.c ft_isascii.c ft_strdup.c ft_toupper.c ft_isdigit.c \
ft_strjoin.c ft_isprint.c ft_memchr.c ft_strlcat.c ft_itoa.c \
ft_memcmp.c ft_strlcpy.c ft_memcpy.c ft_strlen.c ft_memmove.c \
ft_strmapi.c ft_memset.c ft_strncmp.c ft_memccpy.c ft_split.c

OBJS	= ${SRCS:.c=.o}

OBJSBNS = ${BONUS:.c=.o}

NAME	= libft.a

AR		= ar rcs

CFLAGS	= -Wall -Werror -Wextra

CC 		= gcc

RM		= rm -f

.c.o:	
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}

bonus:		${OBJS} ${OBJSBNS}
			${AR} ${NAME} ${OBJS} ${OBJSBNS}

all:		${NAME}

clean:	
			${RM} ${OBJS}
			${RM} ${OBJSBNS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		bonus all clean fclean re