/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:57:12 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/07 14:58:41 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		check_flags(const char *str, t_printf *var)
{
	int nb_flags;
	int i;

	i = 0;
	nb_flags = 0;
	var->stock_flags = NULL;
	while (str[i] && (str[i] == '-' || str[i] == '.'
	|| str[i] == '*' || (str[i] >= '0' && str[i] <= '9')))
	{
		i++;
		nb_flags++;
	}
	if (nb_flags > 0)
	{
		var->stock_flags = malloc(sizeof(char) * (nb_flags + 1));
		i = 0;
		while (i < nb_flags)
		{
			var->stock_flags[i] = str[i];
			i++;
		}
		var->stock_flags[i] = '\0';
	}
	return (nb_flags);
}

void	assign_param_star(t_printf *var)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (var->stock_flags[i])
	{
		if (var->stock_flags[i] == '*')
			nb++;
		i++;
	}
	var->flag_star = malloc(sizeof(int) * nb);
	i = 0;
	nb = 0;
	while (var->stock_flags[i])
	{
		if (var->stock_flags[i] == '*')
		{
			var->flag_star[nb] = va_arg(var->ap, int);
			nb++;
		}
		i++;
	}
}
