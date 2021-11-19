NAME    =   convert

SRCS    =   *.cpp

HEADER1 =   Converc.hpp


GCC             = clang++

RM              = rm -f

CFLAGS	=	-Wall -Werror -Wextra -I ${HEADER1}

all:    ${NAME}

${NAME}: ${SRCS}
	${GCC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
		${RM} ${NAME}
fclean:	clean

re:			fclean all