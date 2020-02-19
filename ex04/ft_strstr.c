/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 21:32:15 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/19 13:43:38 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*point;

	i = 0;
	point = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
			j++;
		if (j >= ft_strlen(to_find))
		{
			if (str[ft_strlen(str)] == to_find[ft_strlen(to_find)])
				point = &str[i];
			return (point);
		}
		i++;
	}
	return (point);
}

int		ft_strlen(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		continue;
	return (i - 1);
}
