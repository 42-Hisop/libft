/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 17:42:52 by khee-seo          #+#    #+#             */
/*   Updated: 2021/01/03 08:04:42 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, unsigned int size)
{
	unsigned int	i;
	unsigned char	*n1;
	unsigned char	*n2;

	n1 = (unsigned char *)s1;
	n2 = (unsigned char *)s2;
	i = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		if (n1[i] != n2[i] || (n1[i] == '\0' && n2[i] == '\0'))
			return (n1[i] - n2[i]);
		i++;
	}
	return (0);
}
