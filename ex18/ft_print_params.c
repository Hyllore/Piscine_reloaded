/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 13:09:14 by droly             #+#    #+#             */
/*   Updated: 2017/02/17 16:33:46 by droly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(int argc, char **argv)
{
	int i;
	int i2;

	i2 = 0;
	i = 1;
	while (argc != 1)
	{
		i2 = 0;
		while (argv[i][i2] != '\0')
		{
			ft_putchar(argv[i][i2]);
			i2++;
		}
		ft_putchar('\n');
		i++;
		argc--;
	}
}

int		main(int argc, char **argv)
{
	ft_print_params(argc, argv);
}
