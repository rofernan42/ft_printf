/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:36:06 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/12 11:17:56 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char	*dest;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	if (!src)
		return (NULL);
	while (src[len] && len < n)
		len++;
	if (!(dest = malloc(sizeof(*dest) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
