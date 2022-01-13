/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:10:56 by rpaulino          #+#    #+#             */
/*   Updated: 2021/03/07 17:21:50 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t destlen;

	destlen = ft_strlen(dest);
	i = 0;
	if (destlen >= size)
		return (size + ft_strlen(src));
	while (destlen + i < size - 1 && src[i] != '\0')
		dest[destlen + i] = src[i++];
	dest[destlen + i] = '\0';
	return (destlen + ft_strlen(src));
}
