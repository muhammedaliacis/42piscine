/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macis <macis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:55:16 by macis             #+#    #+#             */
/*   Updated: 2022/03/29 20:19:40 by macis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	x = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (x == 1 && str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		else if (x == 0 && str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		if (str[i] < 48 || (str[i] < 65 && str[i] > 57))
			x = 1;
		else if ((str[i] > 90 && str[i] < 97) || str[i] > 122)
			x = 1;
		else
			x = 0;
		i++;
	}
	return (str);
}
