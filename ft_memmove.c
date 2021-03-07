/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:10:26 by rpaulino          #+#    #+#             */
/*   Updated: 2021/02/21 03:49:59 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	const char	*ends;
	char		*endd;

	d = dest;
	s = src;
	ends = s + (len - 1);
	endd = d + (len - 1);
	if (src == dest)
		return (0);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
		while (len--)
			*endd-- = *ends--;
	return (dest);
}
