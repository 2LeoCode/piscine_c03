/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 09:31:41 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/10 14:06:27 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	char			*point;

	point = 0;
	i = 0;
	if (*to_find)
	{
		while (str[i])
		{
			if (!point)
			{
				if (str[i] == *to_find)
				{
					point = &str[i];
				}
			}
			i++;
		}
	}
	else
	{
		point = str;
	}
	return (point);
}
