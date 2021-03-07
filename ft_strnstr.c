/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:11:14 by rpaulino          #+#    #+#             */
/*   Updated: 2021/02/21 03:49:59 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*bigstr;
	char	*littlestr;

	bigstr = (char *)big;
	littlestr = (char *)little;
	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return (bigstr);
	while (i < ft_strlen(bigstr))
	{
		while (bigstr[i + j] == littlestr[j] && (i + j) < len)
		{
			j++;
			if (littlestr[j] == '\0')
				return (bigstr + i);
		}
		j = 0;
		i++;
	}
	return (0);
}
