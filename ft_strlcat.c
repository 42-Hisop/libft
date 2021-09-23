/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 21:49:01 by khee-seo          #+#    #+#             */
/*   Updated: 2021/01/03 08:01:28 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	cpy;
	unsigned int	i;

	dst_len = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	while (dst[dst_len])
		dst_len++;
	if (size < dst_len || size == 0)
		return (src_len + size);
	cpy = dst_len;
	i = 0;
	while (i + dst_len + 1 < size && src[i])
	{
		dst[cpy] = src[i];
		i++;
		cpy++;
	}
	dst[cpy] = '\0';
	return (dst_len + src_len);
}
