/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:03:51 by rthome-d          #+#    #+#             */
/*   Updated: 2022/05/23 15:46:26 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H_INCLUDED
# define LIBFT_H_INCLUDED

# include <stdlib.h>

int		ft_isalph(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int 	ft_isprint(int c);
int 	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t m);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, void *src, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);
size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);

#endif // LIBFT_H_INCLUDED
