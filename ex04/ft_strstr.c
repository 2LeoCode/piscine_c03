/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 09:31:41 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/10 21:41:54 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	stock_i;
	unsigned int	j;
	char			*point;

	point = 0;
	i = 0;
	while (str[i])
	{
		if (!point)
		{
			if (str[i] == to_find[0])
			{
				stock_i = i;
				j = 0;
				while (to_find[j])
				{
					if (to_find[j] != str[stock_i])
						break;
					stock_i++;
					j++;
				}
				if (!to_find[j])
					point = &str[i];
			}
		}
		i++;
	}
	return (point);
}
