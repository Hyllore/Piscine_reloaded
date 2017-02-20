/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 15:06:30 by droly             #+#    #+#             */
/*   Updated: 2017/02/17 15:59:34 by droly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void		ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void		ft_putstr(char *str, int fd)
{
	int		index;

	index = 0;
	if (str == NULL)
		return ;
	while (str[index] != '\0')
	{
		ft_putchar(str[index], fd);
		index++;
	}
}

int			main(int argc, char **argv)
{
	int		fd;
	char	*tmp;

	tmp = NULL;
	fd = 0;
	if (argc < 2)
	{
		ft_putstr("File name missing.\n", 2);
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n", 2);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("File not found\n", 2);
		return (0);
	}
	while (read(fd, &tmp, 1) != 0)
		write(1, &tmp, 1);
	close(fd);
}
