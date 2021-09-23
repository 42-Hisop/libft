/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kri>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 18:09:37 by khee-seo          #+#    #+#             */
/*   Updated: 2021/01/03 07:58:54 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int val, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		*((unsigned char *)dst + i) = val;
		i++;
	}
	return (dst);
}
