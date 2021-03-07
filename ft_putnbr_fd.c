/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:13:21 by rpaulino          #+#    #+#             */
/*   Updated: 2021/02/22 03:23:52 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		countern(long int n)
{
	int counter;

	counter = 0;
	while (n > 9)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

static int		power(long int n, int p)
{
	int result;

	result = 1;
	while (p > 0)
	{
		result *= n;
		p--;
	}
	return (result);
}

static void		write_n(long int n, int fd)
{
	char	num;
	int		len;
	int		powr;

	len = countern(n);
	while (len + 1 > 0)
	{
		powr = (power(10, len));
		num = n / powr + '0';
		write(fd, &num, 1);
		n = n % powr;
		len--;
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	int long number;

	number = (long)n;
	if (number < 0)
	{
		write(fd, "-", 1);
		number *= -1;
	}
	write_n(number, fd);
}
