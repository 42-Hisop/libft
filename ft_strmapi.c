/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 09:51:42 by khee-seo          #+#    #+#             */
/*   Updated: 2021/01/03 08:10:53 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	unsigned int	len;
	unsigned int	i;

	if (s == 0 || f == 0)
		return (0);
	len = 0;
	while (s[len])
		len++;
	if (!(p = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	i = 0;
	while (s[i])
	{
		p[i] = s[i];
		p[i] = f(i, p[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
