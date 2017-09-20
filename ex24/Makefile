NAME = libft.a
FLAGS = -Wall -Werror -Wextra
OPTION = -c
INCLUDES = includes/*.h
SRC = srcs/
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all : $(NAME)

$(NAME) :
	@gcc $(FLAGS) $(OPTION) $(INCLUDES) $(SRC)ft_putchar.c $(SRC)ft_putstr.c $(SRC)ft_strcmp.c $(SRC)ft_strlen.c $(SRC)ft_swap.c
	@ar rc $(NAME) $(OBJECTS)

clean :
	@rm -rf $(OBJECTS)

fclean : clean
	@rm -rf $(NAME)

re : fclean all
