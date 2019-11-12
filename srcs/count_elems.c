/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_elems.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:13:15 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/12 15:01:59 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		count_elem(char *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			count++;
		i++;
	}
	return (count);
}

int		count_zeros(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] && str[i] == '-')
		i++;
	while (str[i] && str[i] == '0')
	{
		i++;
		count++;
	}
	return (count);
}
