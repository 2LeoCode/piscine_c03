/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 17:31:06 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/12 22:27:10 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = ft_sizeof(dest);
	j = -1;
	while (++j < nb)
	{
		if (src[j])
			dest[i] = src[j];
		else
			break ;
		i++;
	}
	while (++i <= nb)
		if (dest[i])
			dest[i] = 0;
	return (dest);
}
