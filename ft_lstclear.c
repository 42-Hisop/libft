/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 23:37:53 by khee-seo          #+#    #+#             */
/*   Updated: 2021/01/03 08:14:23 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*c;
	t_list		*temp;

	c = *lst;
	while (c)
	{
		temp = c->next;
		ft_lstdelone(c, del);
		c = temp;
	}
	*lst = 0;
}
