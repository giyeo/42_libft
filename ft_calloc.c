/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:09:11 by rpaulino          #+#    #+#             */
/*   Updated: 2021/03/07 10:42:32 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Aloca a um ponteiro resultado, num(char, int, etc), size espaços.	*/
/*Protege contra memory leak da alocação 							*/
/*Zero todo o conteúdo do ponteiro alocado.							*/
/*Retorno: o ponteiro												*/

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void *result;

	result = malloc(num * size);
	if (result == 0)
		return (result);
	ft_bzero(result, num * size);
	return (result);
}
