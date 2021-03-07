/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 12:36:45 by rpaulino          #+#    #+#             */
/*   Updated: 2021/03/07 10:39:36 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Verifica se o argumento é um número, ou parte do alfabeto romano. ASCII.	*/
/*Retorno: 1 se True, 0 se False.											*/

#include "libft.h"

int		ft_isalnum(int argument)
{
	if (ft_isdigit(argument) || ft_isalpha(argument))
		return (1);
	return (0);
}
