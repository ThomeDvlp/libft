/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:35:48 by rthome-d          #+#    #+#             */
/*   Updated: 2022/05/23 15:19:09 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*src;
   	char	*dest;
	int		i;

	src = (char *)str2;
	dest = (char *)str1;
	i = 0;
	if((src == 0 && dest ==0) && n > 0)
		return (NULL);
	while(n >0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return	(dest);
}
