/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olrudenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 15:41:28 by olrudenk          #+#    #+#             */
/*   Updated: 2018/12/05 15:39:28 by olrudenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32
# include <sys/types.h>
# include <sys/uio.h>

typedef struct		s_lst
{
	char			*buf;
	int				fd;
	int				rb;
	struct s_lst	*next;
}					t_lst;

int					get_next_line(const int fd, char **line);

#endif
