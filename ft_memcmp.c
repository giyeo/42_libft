/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:10:12 by rpaulino          #+#    #+#             */
/*   Updated: 2021/02/21 03:49:59 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*string1;
	unsigned char	*string2;
	unsigned int	counter;

	counter = 0;
	string1 = (unsigned char *)str1;
	string2 = (unsigned char *)str2;
	if (n == 0)
		return (0);
	while (string1[counter] == string2[counter] && --n)
		counter++;
	return (string1[counter] - string2[counter]);
}
