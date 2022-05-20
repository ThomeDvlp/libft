/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:04:55 by rthome-d          #+#    #+#             */
/*   Updated: 2022/05/18 12:45:39 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t m)
{
	char *p;
   
	p = s;

	while(m > 0)
	{
		*p = c;
		p++;
		m--;
	}
	return (s);
}
