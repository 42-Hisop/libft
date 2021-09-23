/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 17:10:54 by khee-seo          #+#    #+#             */
/*   Updated: 2021/01/03 08:00:22 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *dst, int c, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (*((unsigned char *)dst + i) == (unsigned char)c)
			return ((void *)dst + i);
		i++;
	}
	return (0);
}
