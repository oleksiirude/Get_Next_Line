/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contminlst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olrudenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:08:43 by olrudenk          #+#    #+#             */
/*   Updated: 2018/11/15 13:17:48 by olrudenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_contminlst(t_list *root)
{
	t_list	*min;

	if (!root)
		return (NULL);
	min = root;
	while (root->next)
	{
		if (min->content_size > root->next->content_size)
			min = root->next;
		root = root->next;
	}
	return (min);
}
