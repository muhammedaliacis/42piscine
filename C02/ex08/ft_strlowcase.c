/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macis <macis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:55:16 by macis             #+#    #+#             */
/*   Updated: 2022/03/29 20:19:40 by macis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 90) && (str[i] >= 65))
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}	
