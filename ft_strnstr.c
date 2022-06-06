/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:01:21 by rthome-d          #+#    #+#             */
/*   Updated: 2022/06/06 11:28:32 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char*big, const char*little, size_t len)
{
	size_t	big_offset;
	size_t	little_offset;

	big_offset = 0;
	if(!little)
		return ((char *)big);
	while(big[big_offset] && big_offset < len)
	{
		little_offset =  0;
		if(big[big_offset] == little[little_offset])
		{
			while(big[big_offset++] == little[little_offset++])
			{
				if(little_offset == (size_t *)ft_strlen(little_offset)
					return ((char *)big[big_offset]
			}
		

		}
	return (NULL);
}		
