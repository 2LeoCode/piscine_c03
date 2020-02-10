/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 10:20:02 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/10 16:02:37 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_sizeof(char *tab)
{
	unsigned int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void			increment_ij(unsigned int *a, unsigned int *b)
{
	++*a;
	++*b;
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int stock;

	i = ft_sizeof(dest);
	stock = i;
	j = 0;
	while (i < size)
	{
		if (src[j])
			if (i == size - 1)
				dest[i] = 0;
			else
				dest[i] = src[j];
		else
		{
			dest[i] = 0;
			break ;
		}
		increment_ij(&i, &j);
	}
	if (stock < size)
		return (stock + ft_sizeof(src));
	else
		return (ft_sizeof(src) + size);
}
