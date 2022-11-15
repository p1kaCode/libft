NAME = libft.a

SRCS = $(wildcard srcs/*.c)

BNSRCS= $(wildcard bonus/*.c)

OBJS = $(SRCS:.c=.o)

BNS = $(BNSRCS:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

.c.o :
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o}

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus : $(OBJS) $(BNS)
	ar rcs $(NAME) $(OBJS) $(BNS)

clean :
	$(RM) $(OBJS) $(BNS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
