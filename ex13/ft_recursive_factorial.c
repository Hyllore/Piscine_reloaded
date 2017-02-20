/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 15:21:44 by droly             #+#    #+#             */
/*   Updated: 2017/02/15 16:38:50 by droly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int res;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		res = ft_recursive_factorial(nb - 1);
		if ((nb * res) / nb != res)
			return (0);
		return (nb * res);
	}
}
