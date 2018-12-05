/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contmaxlst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olrudenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:08:43 by olrudenk          #+#    #+#             */
/*   Updated: 2018/11/18 13:19:22 by olrudenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_contmaxlst(t_list *root)
{
	t_list	*max;

	if (!root)
		return (NULL);
	max = root;
	while (root->next)
	{
		if (max->content_size < root->next->content_size)
			max = root->next;
		root = root->next;
	}
	return (max);
}
