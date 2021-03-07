/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:10:35 by rpaulino          #+#    #+#             */
/*   Updated: 2021/02/21 03:49:59 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *str, int c)
{
	int		counter;
	int		len;
	char	*result;

	result = 0;
	counter = 0;
	len = ft_strlen(str) + 1;
	while (counter < len)
	{
		if (str[counter] == c)
		{
			result = (char *)str + counter;
			return (result);
		}
		counter++;
	}
	return (result);
}
