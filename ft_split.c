/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <askunknownsurname@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:13:33 by rpaulino          #+#    #+#             */
/*   Updated: 2021/02/23 08:02:02 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_letters(const char *str, const char chr)
{
	size_t i;

	i = 0;
	while (str[i] && str[i] != chr)
		i++;
	return (i);
}

static size_t	word_number(const char *str, char chr)
{
	size_t	i;
	size_t	n_string;

	i = 0;
	n_string = 0;
	while (str[i])
	{
		if (str[i] != chr)
			n_string++;
		while (str[i] != chr && str[i + 1])
			i++;
		i++;
	}
	return (n_string);
}

static char		**ptr_alloc(char **pointer, const char *s, char c, size_t num)
{
	size_t	i;
	size_t	s_len;

	i = 0;
	while (num--)
	{
		while (s[i] == c && s[i])
			i++;
		s_len = word_letters((s + i), c);
		*pointer++ = ft_substr(s, i, s_len);
		i = s_len + i;
	}
	*pointer = 0;
	return (pointer);
}

char			**ft_split(char const *s, char c)
{
	char	**pointer;
	size_t	word_n;

	if (s == 0)
		return (0);
	word_n = word_number(s, c);
	pointer = (char **)malloc(sizeof(char **) * (word_n + 1));
	if (pointer == 0)
		return (0);
	ptr_alloc(pointer, s, c, (word_n));
	return (pointer);
}
