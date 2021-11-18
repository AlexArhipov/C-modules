NAME    =   Identify

SRCS    =   *.cpp

HEADER1 =   A.hpp

HEADER2  =  B.hpp

HEADER3  =  C.hpp

HEADER4  =  Base.h

GCC             = clang++

RM              = rm -f

CFLAGS	=	-Wall -Werror -Wextra -I ${HEADER1} -I ${HEADER2} -I ${HEADER3} -I ${HEADER4}

all:    ${NAME}

${NAME}: ${SRCS}
	${GCC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
		${RM} ${NAME}
fclean:	clean

re:			fclean all