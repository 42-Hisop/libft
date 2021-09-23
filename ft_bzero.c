/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 19:11:50 by khee-seo          #+#    #+#             */
/*   Updated: 2021/01/03 07:59:10 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dst, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		*((unsigned char *)dst + i) = 0;
		i++;
	}
}
