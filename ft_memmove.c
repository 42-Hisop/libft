/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 14:43:47 by khee-seo          #+#    #+#             */
/*   Updated: 2021/01/03 08:31:18 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int size)
{
	unsigned int	i;

	if (dst == 0 && src == 0)
		return (0);
	i = 0;
	if (dst < src)
	{
		while (i < size)
		{
			*((unsigned char *)dst + i) = *((unsigned char *)src + i);
			i++;
		}
	}
	else
	{
		while (i < size)
		{
			*((unsigned char *)dst + (size - 1) - i) =
				*((unsigned char *)src + (size - 1) - i);
			i++;
		}
	}
	return (dst);
}
