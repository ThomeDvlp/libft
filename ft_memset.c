/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:04:55 by rthome-d          #+#    #+#             */
/*   Updated: 2022/05/13 15:00:55 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, int m)
{
	unsigned char *p = s;

	while(m > 0)
	{
		*p = c;
		p++;
		m--;
	}
	return (s);
}
