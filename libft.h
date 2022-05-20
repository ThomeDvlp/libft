/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:03:51 by rthome-d          #+#    #+#             */
/*   Updated: 2022/05/18 12:48:18 by rthome-d         ###   ########.fr       */
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


#endif // LIBFT_H_INCLUDED
