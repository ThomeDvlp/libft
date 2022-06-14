/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:03:51 by rthome-d          #+#    #+#             */
/*   Updated: 2022/06/13 22:52:14 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t m);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);
size_t	ft_strlcpy(char*restrict dst, const char*restrict src, size_t dstsize);
size_t	ft_strlcat(char*restrict dst, const char*restrict src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char*s, int c);
char	*ft_strrchr(const char*s, int c);
int		ft_strncmp(const char*s1, const char*s2, size_t n);
void	*ft_memchr(const void*s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char*big, const char*little, size_t len);
int		ft_atoi(const char *str);
char	*ft_strdup(const char *str);
void	*ft_calloc(size_t num, size_t size);
char	*ft_substr(const char *src, unsigned int start, size_t len);
char	*ft_strjoin(char const *str1, char const *str2);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif // LIBFT_H_INCLUDED
