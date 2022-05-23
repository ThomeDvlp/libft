/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:49:06 by rthome-d          #+#    #+#             */
/*   Updated: 2022/05/23 14:28:54 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	char	*csrc;
	char	*cdest;
	int		i;
	
	csrc	= (char *)src;
   	cdest	= (char *)dest;
	i		= 0;
	if((cdest == 0 && csrc == 0) && n > 0)
		return (NULL);	
	while(n >0)
	{
		cdest[i] = csrc[i];
		i++;
		n--;
	}
	return (dest);
}

