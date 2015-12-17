/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddela-cr <ddela-cr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:24:25 by ddela-cr          #+#    #+#             */
/*   Updated: 2015/12/15 16:26:09 by ddela-cr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_tetri.h"
#include "check_file.h"
#include "tab2list.h"

int	ft_check_tetri(t_tetr *list)
{
	t_tetr	*tmp;

	tmp = list;
	while (tmp)
	{
		if (ft_check_content(tmp->content) == NOT_VALID)
			return (NOT_VALID);
		tmp = tmp->next;
	}
	return (VALID);
}

int	ft_check_content(char **content)
{
	int		x;
	int		y;
	int		count;

	x = 0;
	y = 0;
	count = 0;
	while (x <= 4 && y <= 4)
	{
		if (content[y][x] == '#')
		{
			count++;
			if (ft_check_cases(x, y, content) == NOT_VALID)
				return (NOT_VALID);
		}
		if (x == 4 && y < 4)
		{
			y++;
			x = -1;
		}
		x++;
	}
	if (count != 4)
		return (NOT_VALID);
	return (VALID);
}

int	ft_check_cases(int x, int y, char **tmp)
{
	if (y > 0)
		if (tmp[y - 1][x] == '#')
			return (VALID);
	if (x > 0)
		if (tmp[y][x - 1] == '#')
			return (VALID);
	if (y < 4)
		if (tmp[y + 1][x] == '#')
			return (VALID);
	if (x < 4)
		if (tmp[y][x + 1] == '#')
			return (VALID);
	return (NOT_VALID);
}