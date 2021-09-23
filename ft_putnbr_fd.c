/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 21:19:37 by khee-seo          #+#    #+#             */
/*   Updated: 2021/01/03 08:11:45 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	put(unsigned int n, int fd, char *num)
{
	if (10 <= n)
		put(n / 10, fd, num);
	write(fd, &num[n % 10], 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int				i;
	unsigned int	cpy;
	char			num[10];

	i = 0;
	while (i < 10)
	{
		num[i] = i + '0';
		i++;
	}
	if (n < 0)
		write(fd, "-", 1);
	cpy = n < 0 ? n * -1 : n;
	put(cpy, fd, num);
}
