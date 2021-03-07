/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:07:45 by rpaulino          #+#    #+#             */
/*   Updated: 2021/03/07 10:41:50 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Atribui Zero ao ponteiro *s de endereço até endereço + n.*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	counter;
	unsigned char	*pointer;

	pointer = (unsigned char *)s;
	counter = 0;
	while (n > 0)
	{
		pointer[counter] = 0;
		counter++;
		n--;
	}
}
