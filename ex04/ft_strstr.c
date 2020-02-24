/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 21:32:15 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/24 18:19:37 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_strncmp(char *s1, char *s2, int n)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && i < n - 1)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (!ft_strncmp(&str[i], to_find, ft_strlen(to_find)))
				return (&str[i]);
		}
		i++;
	}
	return ((void*)0);
}
