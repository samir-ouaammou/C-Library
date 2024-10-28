FILES_C =   ft_atoi.c   ft_memset.c ft_strlcpy.c    ft_bzero.c  ft_putchar_fd.c ft_strlen.c\
    ft_calloc.c ft_putendl_fd.c ft_strmapi.c    ft_isalnum.c    ft_putnbr_fd.c  ft_strncmp.c\
    ft_isalpha.c    ft_putstr_fd.c  ft_strnstr.c    ft_isascii.c    ft_split.c  ft_strrchr.c\
    ft_isdigit.c    ft_strchr.c ft_strtrim.c    ft_isprint.c    ft_memchr.c ft_strdup.c\
    ft_substr.c ft_itoa.c   ft_memcmp.c ft_striteri.c   ft_tolower.c    ft_memcpy.c\
    ft_strjoin.c    ft_toupper.c    ft_memmove.c    ft_strlcat.c\

FILES_BONUS_C = ft_lstadd_back_bonu.c   ft_lstdelone_bonu.c ft_lstmap_bonu.c\
    ft_lstadd_front_bonu.c  ft_lstiter_bonu.c   ft_lstnew_bonu.c\
    ft_lstclear_bonu.c  ft_lstlast_bonu.c   ft_lstsize_bonu.c

OBJS = ${FILES_C:%.c=%.o}

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

AR = ar rc

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
