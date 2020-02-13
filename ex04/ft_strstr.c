/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 21:32:15 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/13 22:55:50 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sizeof(char *str);

char	*ft_strstr (char *str, char *to_find)
{
	int i;
	int j;
	char *point;

	i = -1;
	point = 0;
	while (1)
	{
		j = -1;
		while (str[++i] != to_find[0])
			if(!str[i])
				return (point);
		while (str[i] == to_find[++j])
		{
			i++;
		}
		if (j == ft_sizeof(to_find))
		{
			point = &str[i - ft_sizeof(to_find)];
			return (point);
		}
		else if (i >= ft_sizeof(str))
			return (point);
	}
}

int		ft_sizeof(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		continue;
	return (i);
}
