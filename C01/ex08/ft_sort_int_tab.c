/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macis <macis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:29:00 by macis             #+#    #+#             */
/*   Updated: 2022/03/28 18:29:01 by macis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	havuz;

	i = 0;
	size--;
	while (i < size)
	{
		if (tab[i] < tab[i + 1])
			i++;
		else
		{
			havuz = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = havuz;
			i = 0;
		}	
	}
}
