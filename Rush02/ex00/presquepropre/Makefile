NAME = rush-02

MY_SOURCES = biblio_one.c biblio_two.c dico_creation.c input_transformation.c tab_creation.c main.c
MY_OBJECTS = $(MY_SOURCES:.c=.o)

CC = cc

CUR_DIR = $(shell pwd)

all:	$(NAME)

$(NAME): $(MY_OBJECTS)
	$(CC) -o $(NAME) $(MY_OBJECTS)

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f $(MY_OBJECTS)

fclean: 
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
