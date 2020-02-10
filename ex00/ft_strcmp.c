/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 11:48:03 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/10 13:19:46 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (!s2[i])
			return (s1[i]);
		if (s1[i] < s2[i])
			break;
		if (s1[i] > s2[i])
			break;
		i++;
	}
	if (s1[i])
		return (s1[i] - s2[i]);
	else if (s2[i])
		return (0 - s2[i]);
	else
		return (0);
}
