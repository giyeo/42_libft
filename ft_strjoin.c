/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:13:38 by rpaulino          #+#    #+#             */
/*   Updated: 2021/02/21 03:49:59 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*joinstrings(char *pointer, char const *s1, char const *s2)
{
	int counter;

	counter = 0;
	while (*s1 != '\0')
	{
		pointer[counter] = *s1;
		s1++;
		counter++;
	}
	while (*s2 != '\0')
	{
		pointer[counter] = *s2;
		s2++;
		counter++;
	}
	pointer[counter] = '\0';
	return (pointer);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	lens1;
	unsigned int	lens2;
	char			*pointer;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	pointer = malloc((lens1 + lens2) + 1 * sizeof(char));
	if (pointer == 0)
		return (0);
	return (joinstrings(pointer, s1, s2));
}
