# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/31 10:26:27 by souaammo          #+#    #+#              #
#    Updated: 2024/11/01 21:22:56 by souaammo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES =   ft_atoi.c   ft_memset.c ft_strlcpy.c    ft_bzero.c  ft_putchar_fd.c ft_strlen.c \
          ft_calloc.c ft_putendl_fd.c ft_strmapi.c ft_isalnum.c ft_putnbr_fd.c ft_strncmp.c \
          ft_isalpha.c ft_putstr_fd.c ft_strnstr.c ft_isascii.c ft_split.c ft_strrchr.c \
          ft_isdigit.c ft_strchr.c ft_strtrim.c ft_isprint.c ft_memchr.c ft_strdup.c \
          ft_substr.c ft_itoa.c   ft_memcmp.c ft_striteri.c ft_tolower.c ft_memcpy.c \
          ft_strjoin.c ft_toupper.c ft_memmove.c ft_strlcat.c

BFILES =  ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstmap_bonus.c \
          ft_lstadd_front_bonus.c ft_lstiter_bonus.c ft_lstnew_bonus.c \
          ft_lstclear_bonus.c ft_lstlast_bonus.c ft_lstsize_bonus.c

OBJS = $(FILES:.c=.o)
BOBJS = $(BFILES:.c=.o)

NAME = libft.a
HEADRF = libft.h

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf

all: $(NAME)

$(NAME): $(HEADRF) $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c $(HEADRF)
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BOBJS)
	$(AR) $(NAME) $(BOBJS)

clean:
	$(RM) $(OBJS) $(BOBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean
