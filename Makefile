FILES_C = ft_atoi.c       ft_isascii.c    ft_memcpy.c     ft_strdup.c     ft_strncmp.c    ft_tolower.c\
ft_bzero.c      ft_isdigit.c    ft_memmove.c    ft_strjoin.c    ft_strnstr.c    ft_toupper.c\
ft_calloc.c     ft_isprint.c    ft_memset.c     ft_strlcat.c    ft_strrchr.c\
ft_isalnum.c    ft_memchr.c     ft_split.c      ft_strlcpy.c    ft_strtrim.c\
ft_isalpha.c    ft_memcmp.c     ft_strchr.c     ft_strlen.c     ft_substr.c

OBJS = $(FILES_C:.c=.o)

NAME = libft.a

CC = cc

C_FLAGS = -Wall -Wextra -Werror

AR = ar rc

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)

%.o: %.c
	$(CC) $(C_FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
