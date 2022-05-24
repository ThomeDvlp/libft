/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:39:21 by rthome-d          #+#    #+#             */
/*   Updated: 2022/05/24 13:13:00 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	
	size_t	offset;

	offset = 0;
	if( dstsize> 0 )
	{
		while (*(src+offset))
		{
			if(offset == dstsize)
			{
				offset--;
				break;
			}

			*(dst + offset) = *(src + offset);
			offset++;
		}
	}

	*(dst + offset) = '\0';

	while(*(src + offset))
			offset++;
	return (offset);
}
