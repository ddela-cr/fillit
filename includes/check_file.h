/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddela-cr <ddela-cr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 13:50:19 by ddela-cr          #+#    #+#             */
/*   Updated: 2015/12/14 18:56:05 by ddela-cr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_FILE_H
# define CHECK_FILE_H

# define BUF_SIZE 1024
# define VALID 1
# define NOT_VALID -1
# define TETR_SIZE 21

char	**ft_check_file(int fd);
char	*ft_file2str(int fd);
int		ft_is_valid_char(unsigned char c);
int		ft_check_format(char *str);

#endif
