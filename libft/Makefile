NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC := ft_isalpha.c\
ft_isdigit.c\
ft_isalnum.c\
ft_isascii.c\
ft_isprint.c\
ft_toupper.c\
ft_tolower.c\
ft_strlen.c\
ft_strchr.c\
ft_strrchr.c\
ft_strncmp.c\
ft_memset.c\
ft_bzero.c\
ft_memchr.c\
ft_memcmp.c\
ft_memcpy.c\
ft_memmove.c\
ft_strlcpy.c\
ft_strlcat.c

OBJS := $(SRC:%.c=%.o)



all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) 

re: fclean all

.PHONY: re all clean fclean