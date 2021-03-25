/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapremon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 10:20:08 by kapremon          #+#    #+#             */
/*   Updated: 2021/03/07 11:12:48 by kapremon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(long n)
{
	write(1, &n, 1);
}

int		ft_pwr(int len)
{
	int len_pwr;

	len_pwr = 1;
	while (len > 0)
	{
		len_pwr *= 10;
		len--;
	}
	return (len_pwr);
}

void	ft_putnbr(int nb)
{
	int		len;
	int		swap;
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n == 0)
		ft_putchar('0');
	len = -1;
	swap = n;
	while (swap != 0)
	{
		swap /= 10;
		len++;
	}
	while (len >= 0)
	{
		ft_putchar((n / ft_pwr(len)) + 48);
		n = n % ft_pwr(len);
		len--;
	}
}
