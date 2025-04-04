/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 09:56:34 by aaugusto          #+#    #+#             */
/*   Updated: 2025/04/04 10:40:21 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_go_read(char *file_name)
{
	int		ret;
	int		fd;
	char	temp[1];

	ret = 1;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (0);
	}
	while (ret > 0)
	{
		ret = read(fd, temp, 1);
		if (ret == -1)
			return (0);
		if (ret > 0)
			ft_putchar(temp[0]);
	}
	ret = close(fd);
	if (ret == -1)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
		ft_go_read(argv[1]);
	return (0);
}
