/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_uns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:06:50 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/14 14:54:22 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static	int		size_str(unsigned int n)
{
	unsigned int	tmp;
	int				len;

	tmp = n;
	len = 0;
	if (n == 0)
		len = 1;
	while (tmp)
	{
		tmp = tmp / 10;
		len++;
	}
	return (len);
}

static	char	*fill_str(unsigned int n, int len, char *str)
{
	while (len)
	{
		str[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

char			*ft_itoa_uns(unsigned int n)
{
	int		len;
	char	*str;

	len = size_str(n);
	if (!(str = malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	str = fill_str(n, len, str);
	return (str);
}
