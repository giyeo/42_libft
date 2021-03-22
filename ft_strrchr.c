/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:11:23 by rpaulino          #+#    #+#             */
/*   Updated: 2021/03/21 17:18:38 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		len;
	char	*result;

	result = 0;
	len = ft_strlen(str) + 1;
	while (len > 0)
	{
		if (*str == (char)c)
		{
			result = (char *)str;
		}
		str++;
		len--;
	}
	return (result);
}
