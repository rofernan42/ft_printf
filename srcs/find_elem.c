/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_elem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:59:19 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/13 13:56:42 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		find_c(char *str, char c, int val)
{
	int i;

	i = 0;
	if (val == 1)
	{
		while (str[i] && str[i] != c)
			i++;
	}
	else if (val == 2)
	{
		while (str[i] && !(str[i] >= '0' && str[i] <= '9'))
			i++;
	}
	return (i);
}

int		find_c_invert(char *str, char c, int val)
{
	int i;

	i = ft_strlen(str) - 1;
	if (val == 1)
	{
		while (i > 0 && str[i] != c)
			i--;
	}
	else if (val == 2)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			while (i > 0 && !(str[i] >= '0' && str[i] <= '9'))
				i--;
		}
		else
		{
			while (i > 0 && str[i] >= '0' && str[i] <= '9')
				i--;
			i++;
		}
	}
	return (i);
}
