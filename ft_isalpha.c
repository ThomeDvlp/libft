/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:33:41 by thome             #+#    #+#             */
/*   Updated: 2022/05/11 16:30:13 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{

	if ( ((unsigned char)c  >= 'A' &&  (unsigned char)c <= 'Z') 
			|| ((unsigned char)c >= 'a' &&  (unsigned char)c <= 'z'))
			return (1);
	return (0);
}
