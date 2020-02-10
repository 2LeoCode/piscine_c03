/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 11:49:19 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/10 13:14:48 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (!s1[i])
			return (0 - s2[i]);
		if (!s2[i])
			return (s1[i]);
		if (s1[i] < s2[i])
			break ;
		if (s1[i] > s2[i])
			break ;
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	else
		return (0);
}
