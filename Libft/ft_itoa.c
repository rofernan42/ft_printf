/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:06:50 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/12 16:16:11 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static	int		size_str(int n)
{
	int tmp;
	int len;

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

static	char	*fill_str(long int n, int len, char *str)
{
	if (n < 0)
	{
		n = -n;
		while (len)
		{
			str[len] = n % 10 + '0';
			n = n / 10;
			len--;
		}
	}
	else
	{
		while (len)
		{
			str[len - 1] = n % 10 + '0';
			n = n / 10;
			len--;
		}
	}
	return (str);
}

char			*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = size_str(n);
	if (n < 0)
	{
		if (!(str = malloc(sizeof(*str) * (len + 2))))
			return (NULL);
		str[0] = '-';
		str[len + 1] = '\0';
	}
	else
	{
		if (!(str = malloc(sizeof(*str) * (len + 1))))
			return (NULL);
		str[len] = '\0';
	}
	str = fill_str(n, len, str);
	return (str);
}
