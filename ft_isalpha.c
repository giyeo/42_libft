/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:09:24 by rpaulino          #+#    #+#             */
/*   Updated: 2021/03/07 10:43:32 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Verifica se o argumento é parte do alfabeto romano. ASCII.	*/
/*Retorno: 1 se True, 0 se False.								*/

int		ft_isalpha(int argument)
{
	if ((argument >= 65 && argument <= 90)
	|| (argument >= 97 && argument <= 122))
		return (1);
	return (0);
}
