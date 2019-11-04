/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:09:28 by rofernan          #+#    #+#             */
/*   Updated: 2019/10/15 10:52:33 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	if (!s1)
		return (NULL);
	while (check_set(s1[i], set))
		i++;
	if ((j = ft_strlen(&s1[i])) > 0)
		j--;
	while (check_set(s1[i + j], set))
		j--;
	j++;
	if (!(str = malloc(sizeof(*str) * (j + 1))))
		return (NULL);
	while (k < j)
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}
