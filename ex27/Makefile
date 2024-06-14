NAME = ft_display_file

CFLAGS = -Wall -Wextra -Werror

SOURCE = ft_display_file.c

OBJECT = $(SOURCE:.c=.o)

all: $(NAME)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECT)
	gcc $(CFLAGS) -o $(NAME) $(OBJECT)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)
