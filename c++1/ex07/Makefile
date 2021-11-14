NAME    =   replace

SRCS    =   *.cpp


GCC             = clang++

RM              = rm -f

CFLAGS	=	-Wall -Werror -Wextra

all:    ${NAME}

${NAME}: ${SRCS}
	${GCC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
		${RM} ${NAME}
fclean:	clean

re:			fclean all