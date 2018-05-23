cmake_minimum_required(VERSION 3.9)
project(libft C)

set(CMAKE_C_STANDARD 90)

set(LIB_SRCS
        ft_bzero.c
        ft_memccpy.c
        ft_memchr.c
        ft_memcmp.c
        ft_memcpy.c
        ft_memmove.c
        ft_memset.c
        ft_strcat.c
        ft_strcmp.c
        ft_strcpy.c
        ft_strdup.c
        ft_strlcat.c
        ft_strlen.c
        ft_strncat.c
        ft_strncmp.c
        ft_strncpy.c
        ft_strstr.c
        ft_strnstr.c
        ft_strchr.c
        ft_strrchr.c
        ft_atoi.c
        ft_isalnum.c
        ft_isdigit.c
        ft_isalpha.c
        ft_isprint.c
        ft_isascii.c
        ft_tolower.c
        ft_toupper.c
        ft_memalloc.c
        ft_memdel.c
        ft_strnew.c
        ft_strdel.c
        ft_strclr.c
        ft_striter.c
        ft_striteri.c
        ft_strmap.c
        ft_strmapi.c
        ft_strequ.c
        ft_strequ.c
        ft_strnequ.c
        ft_strsub.c
        ft_strjoin.c
        ft_strtrim.c
        ft_strsplit.c
        ft_itoa.c
        ft_putchar.c
        ft_putchar_fd.c
        ft_putstr.c
        ft_putstr_fd.c
        ft_putendl.c
        ft_putendl_fd.c
        ft_putnbr.c
        ft_putnbr_fd.c
        ft_lstnew.c
        ft_lstdelone.c
        ft_lstdel.c
        ft_lstadd.c
        ft_lstiter.c
        ft_lstmap.c
        ft_list_push_back.c
        ft_list_size.c
        ft_list_last.c
        ft_list_foreach.c
        ft_strsplit_charset.c
        ft_str_to_lower.c
        ft_str_to_upper.c
        ft_convert_base.c
        ft_itoa_base.c
        ft_atoi_base.c)

add_library(ft ${LIB_SRCS} libft.h)
target_compile_options(ft PRIVATE ${FLAGS})