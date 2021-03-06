/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddela-cr <ddela-cr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 11:31:15 by ddela-cr          #+#    #+#             */
/*   Updated: 2015/12/18 17:00:07 by ddela-cr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "libft.h"
#include "fillit.h"

int	main(int ac, char **av)
{
	int	fd;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("error\n");
			return (1);
		}
		else if (ft_fillit(fd) == ERROR)
		{
			ft_putstr("error\n");
			return (1);
		}
		if (close(fd) == -1)
		{
			ft_putstr("error\n");
			return (1);
		}
	}
	else
		ft_putstr("error\n");
	return (0);
}
