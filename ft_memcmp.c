/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 17:42:27 by khee-seo          #+#    #+#             */
/*   Updated: 2021/01/03 08:00:34 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *cmp1, const void *cmp2, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (*((unsigned char *)cmp1 + i) != *((unsigned char *)cmp2 + i))
		{
			return (*((unsigned char *)cmp1 + i) -
					*((unsigned char *)cmp2 + i));
		}
		i++;
	}
	return (0);
}
