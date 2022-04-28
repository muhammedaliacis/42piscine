/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macis <macis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:17:13 by macis             #+#    #+#             */
/*   Updated: 2022/03/24 12:32:36 by macis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putput(char i0, char i1)
{
	ft_putchar(i0 / 10 + 48);
	ft_putchar(i0 % 10 + 48);
	ft_putchar(' ');
	ft_putchar(i1 / 10 + 48);
	ft_putchar(i1 % 10 + 48);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int		i0;
	int		i1;

	i0 = 0;
	while (i0 != 99)
	{
		i1 = i0 + 1;
		while (i1 != 100)
		{
			ft_putput(i0, i1);
			i1++;
		}
		i0++;
	}
}
