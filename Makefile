FLAGS=-Wall -Wextra -Werror
FILES= \
		ft_atoi.c\
		ft_memcmp.c\
		ft_strdup.c\
		ft_strtrim.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_striteri.c\
		ft_substr.c\
		ft_calloc.c\
		ft_memmove.c\
		ft_strjoin.c\
		ft_tolower.c\
		ft_isalnum.c\
		ft_memset.c\
		ft_strlcat.c\
		ft_toupper.c\
		ft_isalpha.c\
		ft_putchar_fd.c\
		ft_strlcpy.c\
		ft_isascii.c\
		ft_putendl_fd.c\
		ft_strlen.c\
		ft_isdigit.c\
		ft_putnbr_fd.c\
		ft_strmapi.c\
		ft_isprint.c\
		ft_putstr_fd.c\
		ft_strncmp.c\
		ft_itoa.c\
		ft_split.c\
		ft_strnstr.c\
		ft_memchr.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_substr\
		ft_strjoin\
		ft_strtrim\
		ft_split\
		ft_itoa\
		ft_strmapi\
		ft_striteri\
		ft_putchar_fd\
		ft_putstr_fd\
		ft_putendl_fd\
		ft_putnbr_fd
OBJS=${FILES:.c=.o}
NAME=libft.a

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} $^

%.o:%.c
	cc  -c ${FLAGS} $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re:
	fclean
	all

.PHONY: all clean fclean re