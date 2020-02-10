/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 10:20:02 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/10 12:17:39 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
unsigned int	ft_sizeof(char *tab)
{
	unsigned int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	int j;
	
	i = ft_sizeof(dest);
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
			break;
		}
		i++;
		j++;
	}
	return(ft_sizeof(src) + ft_sizeof(dest));
}

int main(){
char receveur[20] = "on m'appelle ";
char envoyeur[100] = "l'ovni tututututu";

char receveur2[20] = "on m'appelle ";
char envoyeur2[100] = "l'ovni tututututu";
ft_strlcat(receveur, envoyeur, 20);

strlcat(receveur2, envoyeur2, 20);
printf("%d, %d, %s\n", ft_strlcat(receveur, envoyeur, 20),ft_sizeof(envoyeur), receveur);
printf("%lu, %d, %s", strlcat(receveur2, envoyeur2, 20),ft_sizeof(envoyeur2), receveur2);
return 0;
}
