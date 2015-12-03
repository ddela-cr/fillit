/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddela-cr <ddela-cr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 13:48:28 by ddela-cr          #+#    #+#             */
/*   Updated: 2015/12/03 16:57:41 by ddela-cr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_file.h"
#include "str2array.h"
#include "libft.h"

void	ft_fillit(int fd)
{
	char	*str;

	str = ft_check_file(fd);
	if (str == NULL)
		ft_putstr("error");
	else
		ft_putstr("ft_fillit : valid\n");
	ft_str2array(str);
}
