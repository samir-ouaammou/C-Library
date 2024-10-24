/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:54:13 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/24 22:40:17 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t len);
void	*ft_calloc(size_t count, size_t len);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t len);
char	*ft_strnstr(const char *str, const char *needle, size_t len);
void	*ft_memset(void *s, int c, size_t len);
void	*ft_memchr(const void *s, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);

#endif
