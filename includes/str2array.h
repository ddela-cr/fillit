/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str2array.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddela-cr <ddela-cr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 16:26:09 by ddela-cr          #+#    #+#             */
/*   Updated: 2015/12/04 15:17:32 by ddela-cr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR2ARRAY_H
# define STR2ARRAY_H
/*
typedef struct		/
{
	char			**tetri;
	char			letter;
	struct s_list	next;
	struct s_list	prev;
}					t_list;

*/t_list	*ft_str2list(char *str);

t_list	*ft_tab2list(char **tab);
t_list	ft_create_elem(char **tab, int line);

#endif
