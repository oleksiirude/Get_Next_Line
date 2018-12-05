/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olrudenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 13:30:24 by olrudenk          #+#    #+#             */
/*   Updated: 2018/12/01 16:56:51 by olrudenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstlen(t_list *root)
{
	int	count;

	if (!root)
		return (0);
	count = 0;
	while (root)
	{
		root = root->next;
		count++;
	}
	return (count);
}
