/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 15:40:32 by droly             #+#    #+#             */
/*   Updated: 2017/02/16 16:25:52 by droly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;
	int limit;

	limit = (max - min);
	i = 0;
	tab = NULL;
	if (max <= min)
		return (tab);
	tab = (int*)malloc(sizeof(int) * ((max - min)));
	while (i < limit)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
