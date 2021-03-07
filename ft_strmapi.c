/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:13:44 by rpaulino          #+#    #+#             */
/*   Updated: 2021/02/21 03:49:09 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*result;

	i = 0;
	result = ft_strdup(s);
	if (result == 0 || s == 0 || f == 0)
		return (0);
	while (result[i] != 0)
	{
		result[i] = (*f)(i, result[i]);
		i++;
	}
	return (result);
}
