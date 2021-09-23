/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 05:08:38 by khee-seo          #+#    #+#             */
/*   Updated: 2021/01/03 08:04:17 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *dst, int c)
{
	int		i;

	i = 0;
	while (dst[i])
		i++;
	if ((unsigned char)c == '\0')
		return ((char *)&dst[i]);
	i--;
	while (0 <= i)
	{
		if (dst[i] == (unsigned char)c)
			return ((char *)&dst[i]);
		i--;
	}
	return (0);
}
