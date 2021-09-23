/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 22:55:59 by khee-seo          #+#    #+#             */
/*   Updated: 2021/01/03 08:01:47 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *dst, int c)
{
	int		i;

	i = 0;
	while (dst[i])
	{
		if (dst[i] == (unsigned char)c)
			return ((char *)&dst[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&dst[i]);
	return (0);
}
