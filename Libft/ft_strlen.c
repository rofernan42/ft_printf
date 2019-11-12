/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:36:05 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/12 16:16:39 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

size_t	ft_strlen(const char *str)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	if (str)
	{
		while (str[i])
			i++;
	}
	return (i);
}
