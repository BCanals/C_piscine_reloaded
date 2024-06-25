NAME = ft_display_file

CFLAGS = -Wall -Wextra -Werror

SOURCE = ft_display_file.c

OBJECT = ft_display_file.o

all: $(NAME)

$(NAME): $(OBJECT)
	gcc $(CFLAGS) -c $(SOURCE)
	gcc -o $(NAME) $(OBJECT)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)
