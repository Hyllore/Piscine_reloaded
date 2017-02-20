/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 13:41:22 by droly             #+#    #+#             */
/*   Updated: 2017/02/17 16:34:39 by droly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		dst;

	dst = 0;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	dst = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (dst);
}

void		ft_puttab(char **argv, int argc)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
		ft_putchar('\n');
	}
}

int			main(int argc, char **argv)
{
	int		i;
	int		check;
	char	*tmp;

	tmp = 0;
	i = 0;
	check = 1;
	while (check == 1)
	{
		check = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				check = 1;
			}
			i++;
		}
	}
	ft_puttab(argv, argc);
}
