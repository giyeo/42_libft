/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:10:35 by rpaulino          #+#    #+#             */
/*   Updated: 2021/03/21 17:16:59 by rpaulino         ###   ########.fr       */
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
		if (str[counter] == (char)c)
			return (result = (char *)str + counter);
		counter++;
	}
	return (result);
}
