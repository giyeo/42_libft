/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:09:53 by rpaulino          #+#    #+#             */
/*   Updated: 2021/02/22 03:22:16 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*pointerdest;
	unsigned char	*pointersource;
	size_t			i;

	i = 0;
	pointerdest = (unsigned char *)dest;
	pointersource = (unsigned char *)src;
	while (n-- > 0)
	{
		pointerdest[i] = pointersource[i];
		if (pointersource[i] == (unsigned char)c)
			return (pointerdest + i++ + 1);
	}
	return (0);
}
