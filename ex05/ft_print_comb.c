/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapremon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 10:07:51 by kapremon          #+#    #+#             */
/*   Updated: 2021/03/07 10:10:39 by kapremon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchars(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_putchars_cmm_spc(char c, char d)
{
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchars(a, b, c);
				if (a != '7' || b != '8' || c != '9')
				{
					ft_putchars_cmm_spc(',', ' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
