/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapremon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:59:20 by kapremon          #+#    #+#             */
/*   Updated: 2021/03/07 09:59:36 by kapremon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	write(1, &n, 1);
}

void	ft_print_numbers(void)
{
	int n;

	n = '0';
	while (n <= '9')
	{
		ft_putchar(n);
		n++;
	}
}
