/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:47:46 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/23 10:47:47 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
#define FT_LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

int	    ft_isalpha (int c);
int	    ft_isdigit (int c);
int 	ft_isalnum (int c);
int	    ft_isascii (int c);
int	    ft_isprint (int c);
int	    ft_tolower (int c);
int	    ft_toupper (int c);
int	    ft_atoi (const char *str);
size_t	ft_strlen (const char *str);
char	*ft_strdup (const char *str);
char	*ft_strchr (char *str, int c);
char	*ft_strrchr(char *str, int c);
size_t	ft_strlcpy (char *dst, const char *src, size_t size);
int	    ft_strncmp (const char *s1, const char *s2, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strnstr (char *haystack, const char *needle, size_t	len);
void	ft_bzero(void *s, size_t len);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset (void *s, int c, size_t len);
void	*ft_memchr (const void *s, int c, size_t len);
void	*ft_memcpy (void *dst, const void *src, size_t len);
void	*ft_memmove (void *dst, const void *src, size_t len);
int	    ft_memcmp (const void *s1, const void *s2, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
