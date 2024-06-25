CFLAGS = -Wall -Wextra -Werror

SRCS = srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strcmp.c \
		srcs/ft_strlen.c \
		srcs/ft_swap.c

OBJS = $(SRCS:.c=.o)

INCLUDES = includes/

libft.a: $(OBJS)
	ar rc $@ $(OBJS)
	ranlib $@ 

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

all: libft.a

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f libft.a

re: fclean all
