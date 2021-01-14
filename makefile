SRCS    	= ft_strlen.s ft_write.s ft_strcmp.s ft_strcpy.s ft_read.s ft_strdup.s
OBJS    	= ${SRCS:.s=.o}
NAME    	= libasm.a
CC      	= nasm
RM			= rm -f
CFLAGS 		= -felf64

all:        ${NAME}

.s.o:
			${CC} ${CFLAGS} $< -o $@


$(NAME):    ${OBJS}
			ar rcs ${NAME} ${OBJS}			
			ranlib ${NAME}

clean:
			@${RM} ${OBJS}

fclean:     clean
			@${RM} ${NAME}

re:         fclean all

test:
			$(MAKE) re
			$(MAKE) clean
			gcc main.c -L. -lasm
			./a.out

.PHONY:     all clean fclean re
