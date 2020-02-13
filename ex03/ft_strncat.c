/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 20:51:16 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/13 23:02:48 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);

char			*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = ft_strlen(dest);
	j = -1;
	while (++j < nb)
	{
		if (src[j])
			dest[i] = src[j];
		else
		{
			dest[i] = 0;
			return (dest);
		}
		i++;
	}
	dest[i] = 0;
	return (dest);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
