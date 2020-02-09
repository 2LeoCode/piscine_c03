/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 11:48:03 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/09 11:48:29 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sizeofstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	if (ft_sizeofstr(s1) < ft_sizeofstr(s2))
		return (-1);
	if (ft_sizeofstr(s1) > ft_sizeofstr(s2))
		return (1);
	return (0);
}

