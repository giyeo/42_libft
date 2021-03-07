/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:07:37 by rpaulino          #+#    #+#             */
/*   Updated: 2021/02/22 03:05:53 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(int chr)
{
	if (chr == '\n' || chr == '\t' || chr == '\v' ||
	chr == '\r' || chr == '\f' || chr == ' ')
		return (1);
	else
		return (0);
}

static int		calc_atoi(const char *str, int len, int counter)
{
	int result;

	result = 0;
	while (counter < len)
	{
		if (ft_isdigit(str[counter]))
		{
			result = (result * 10) + (str[counter] - '0');
			counter++;
		}
		else
			return (result);
	}
	return (result);
}

int				ft_atoi(const char *str)
{
	int		len;
	int		final_result;
	int		counter;

	counter = 0;
	len = ft_strlen(str);
	while (ft_isspace(str[counter]))
		counter++;
	if (str[counter] == '+')
		final_result = calc_atoi(str, len, counter + 1);
	else if (str[counter] == '-')
		final_result = calc_atoi(str, len, counter + 1) * -1;
	else
		final_result = calc_atoi(str, len, counter);
	return (final_result);
}
