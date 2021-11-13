NAME    =   PhoneBook

SRCS    =   *.cpp

HEADER1 =   PhoneBook.hpp

HEADER2  =  Contact.hpp

GCC             = clang++

RM              = rm -f

CFLAGS	=	-Wall -Werror -Wextra -I ${HEADER1} -I ${HEADER2}

all:    ${NAME}

${NAME}: ${SRCS}
	${GCC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
		${RM} ${NAME}
fclean:	clean

re:			fclean all