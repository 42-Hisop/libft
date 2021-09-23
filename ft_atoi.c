/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 18:27:51 by khee-seo          #+#    #+#             */
/*   Updated: 2021/01/03 08:04:54 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	transf(const char *src, int i, int neg)
{
	unsigned long long	num;

	num = 0;
	while (src[i] && (48 <= src[i] && src[i] <= 57))
	{
		num = num * 10;
		num = num + (src[i] - '0');
		i++;
	}
	if (num > LLONG_MAX)
	{
		if (neg)
			return (0);
		return (-1);
	}
	return (num);
}

int			ft_atoi(const char *src)
{
	int			i;
	long long	num;
	int			neg;

	i = 0;
	while ((9 <= src[i] && src[i] <= 13) || src[i] == 32)
		i++;
	neg = 0;
	if (src[i] == '+' || src[i] == '-')
	{
		if (src[i] == '-')
			neg++;
		i++;
	}
	num = transf(src, i, neg);
	if (neg)
		num = num * -1;
	return (num);
}
