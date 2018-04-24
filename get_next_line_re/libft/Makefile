NAME = libft.a

FILES  = ft_bzero.c
FILES += ft_memccpy.c
FILES += ft_memchr.c
FILES += ft_memcmp.c
FILES += ft_memcpy.c
FILES += ft_memmove.c
FILES += ft_memset.c
FILES += ft_strcat.c
FILES += ft_strcmp.c
FILES += ft_strcpy.c
FILES += ft_strdup.c
FILES += ft_strlcat.c
FILES += ft_strlen.c
FILES += ft_strncat.c
FILES += ft_strncmp.c
FILES += ft_strncpy.c
FILES += ft_strstr.c
FILES += ft_strnstr.c
FILES += ft_strchr.c
FILES += ft_strrchr.c
FILES += ft_atoi.c
FILES += ft_isalnum.c
FILES += ft_isdigit.c
FILES += ft_isalpha.c
FILES += ft_isprint.c
FILES += ft_isascii.c
FILES += ft_tolower.c
FILES += ft_toupper.c
FILES += ft_toupper.c
FILES += ft_memalloc.c
FILES += ft_memdel.c
FILES += ft_strnew.c
FILES += ft_strdel.c
FILES += ft_strclr.c
FILES += ft_striter.c
FILES += ft_striteri.c
FILES += ft_strmap.c
FILES += ft_strmapi.c
FILES += ft_strequ.c
FILES += ft_strnequ.c
FILES += ft_strsub.c
FILES += ft_strjoin.c
FILES += ft_strtrim.c
FILES += ft_strsplit.c
FILES += ft_itoa.c
FILES += ft_putchar.c
FILES += ft_putchar_fd.c
FILES += ft_putstr.c
FILES += ft_putstr_fd.c
FILES += ft_putendl.c
FILES += ft_putendl_fd.c
FILES += ft_putnbr.c
FILES += ft_putnbr_fd.c
FILES += ft_lstnew.c
FILES += ft_lstdelone.c
FILES += ft_lstdel.c
FILES += ft_lstadd.c
FILES += ft_lstiter.c
FILES += ft_lstmap.c
FILES += ft_list_size.c
FILES += ft_list_last.c
FILES += ft_list_foreach.c
FILES += ft_list_push_back.c
FILES += ft_strsplit_charset.c
FILES += ft_str_to_lower.c
FILES += ft_str_to_upper.c
FILES += ft_convert_base.c
FILES += ft_itoa_base.c
FILES += ft_atoi_base.c

OBJS = $(FILES:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(FILES) -I. ${FLAGS}
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all