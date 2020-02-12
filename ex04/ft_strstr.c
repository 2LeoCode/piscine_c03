/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 09:31:41 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/12 20:38:02 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_racc
{
	int		i;
	int		j;
	int		stock_i;
	char	*point;
}				t_racc;

char			*ft_strstr(char *str, char *to_find)
{
	t_racc r;

	if (to_find[0] == 0)
		return (0);
	r.point = 0;
	r.i = -1;
	while (str[++r.i])
	{
		if (!r.point)
		{
			if (str[r.i] == to_find[0])
			{
				r.stock_i = r.i - 1;
				r.j = -1;
				while (to_find[++r.j])
				{
					if (to_find[r.j] != str[++r.stock_i])
						break ;
				}
				if (!to_find[r.j])
					r.point = &str[r.i];
			}
		}
	}
	return (r.point);
}
