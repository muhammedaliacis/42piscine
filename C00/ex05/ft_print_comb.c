/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macis <macis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:16:43 by macis             #+#    #+#             */
/*   Updated: 2022/03/24 12:29:53 by macis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char i0, char i1, char i2)
{
	char	a0;
	char	a1;
	char	a2;

	a0 = i0 + 48;
	a1 = i1 + 48;
	a2 = i2 + 48;
	write(1, &a0, 1);
	write(1, &a1, 1);
	write(1, &a2, 1);
	if (i0 != 8 && i1 != 9 && i2 != 10)
	{
		write(1, ", ", 2);
	}
}

void	ft_multinette(char i0, char i1, char i2)
{
	if (i0 != 8 || i1 != 9 || i2 != 10)
	{
		ft_putchar(i0, i1, i2);
	}
}

void	ft_print_comb(void)
{
	int		i0;
	int		i1;
	int		i2;

	i0 = 0;
	while (i0 != 8)
	{
		i1 = i0 + 1;
		while (i1 != 9)
		{
			i2 = i1 + 1;
			while (i2 != 10)
			{
				ft_multinette(i0, i1, i2);
				i2++;
			}
			i1++;
		}
		i0++;
	}
}
