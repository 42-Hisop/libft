/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 18:30:55 by khee-seo          #+#    #+#             */
/*   Updated: 2021/01/03 08:08:28 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		end(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i])
		i++;
	i--;
	while (i >= 0)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (!(set[j]))
			break ;
		i--;
	}
	return (i + 1);
}

int		start(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (!(set[j]))
			break ;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		s;
	int		e;
	int		i;

	if (s1 == 0 || set == 0)
		return (0);
	s = start(s1, set);
	e = end(s1, set);
	if (e - s < 0)
	{
		if (!(new = (char *)malloc(sizeof(char))))
			return (0);
		return (new);
	}
	if (!(new = (char *)malloc(sizeof(char) * (e - s + 1))))
		return (0);
	i = 0;
	while (s < e)
	{
		new[i++] = s1[s];
		s++;
	}
	new[i] = '\0';
	return (new);
}
