/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 18:31:40 by khee-seo          #+#    #+#             */
/*   Updated: 2021/01/03 08:12:38 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		len;

	if (lst == 0)
		return (0);
	len = 1;
	while (lst->next != 0)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
