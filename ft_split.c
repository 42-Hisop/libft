/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 06:50:21 by khee-seo          #+#    #+#             */
/*   Updated: 2021/01/05 06:50:57 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		check_len(char const *s, char c)
{
	int		len;
	int		i;
	int		b;

	len = 0;
	i = 0;
	b = 1;
	while (s[i])
	{
		if (b && s[i] != c)
		{
			len++;
			b = 0;
		}
		else if (!b && s[i] == c)
			b = 1;
		i++;
	}
	return (len);
}

int		str_len(char const *s, char c, int st)
{
	int		i;

	i = 0;
	while (s[i + st] && s[i + st] != c)
		i++;
	return (i);
}

void	cpy_str(char const *s, char *p, int st, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		p[i] = s[st + i];
		i++;
	}
	p[i] = '\0';
}

char	**spl(char const *s, char c, int a, int b)
{
	char	**p;
	int		i;

	if (!(p = (char **)malloc(sizeof(char *) * (check_len(s, c) + 1))))
		return (0);
	i = -1;
	while (s[++i])
	{
		if (b && s[i] != c)
		{
			if (!(p[a] = (char *)malloc(sizeof(char) * (str_len(s, c, i) + 1))))
			{
				while (a >= 0)
					free(p[a--]);
				free(p);
				return (0);
			}
			cpy_str(s, p[a++], i, str_len(s, c, i));
			b = 0;
		}
		else if (!b && s[i] == c)
			b = 1;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		len;

	len = check_len(s, c);
	if (!(p = spl(s, c, 0, 1)))
		return (0);
	p[len] = 0;
	return (p);
}
