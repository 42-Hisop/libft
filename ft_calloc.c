/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 21:18:55 by khee-seo          #+#    #+#             */
/*   Updated: 2021/01/03 08:07:13 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int n, unsigned int size)
{
	void			*temp;
	unsigned int	i;

	if (!(temp = malloc(size * n)))
		return (0);
	i = 0;
	while (i < size * n)
	{
		*((unsigned char *)temp + i) = 0;
		i++;
	}
	return (temp);
}
