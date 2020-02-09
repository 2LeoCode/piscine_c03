/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 17:31:06 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/09 18:00:53 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sizeof(char *tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		i++;
	}
	return (i);
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int stock;

	i = ft_sizeof(dest);
	stock = nb + i;
	while (i < stock)
	{
		dest[i] = src[i - nb - 1];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
