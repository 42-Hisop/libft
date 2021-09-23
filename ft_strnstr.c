/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 16:54:44 by khee-seo          #+#    #+#             */
/*   Updated: 2021/01/03 10:26:14 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dst, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	if (!(src[0]))
		return ((char *)dst);
	i = 0;
	while (dst[i] && i < size)
	{
		j = 0;
		while (i + j < size && dst[i + j] == src[j])
		{
			j++;
			if (src[j] == '\0')
				return ((char *)&dst[i]);
		}
		i++;
	}
	return (0);
}
