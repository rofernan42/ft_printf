/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:57:12 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/12 18:20:34 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

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
		if (!(var->stock_flags = malloc(sizeof(char) * (nb_flags + 1))))
			return (0);
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

void	assign_param(t_printf *var)
{
	if (check_nb(var->stock_flags) && !check_c(var->stock_flags, '*'))
		var->flag_star[0] = ft_atoi_minus(var->stock_flags);
	else if (check_c(var->stock_flags, '*'))
	{
		var->flag_star[0] = va_arg(var->ap, int);
		if (check_c(var->stock_flags, '-') && var->flag_star[0] > 0)
			var->flag_star[0] = -var->flag_star[0];
	}
}

void	assign_param_dot(t_printf *var)
{
	int i;

	i = find_c(var->stock_flags, '.');
	if (check_n_nb(&var->stock_flags[0], i) && \
		!check_n_c(&var->stock_flags[0], '*', i))
		var->flag_star[0] = ft_atoi_minus(&var->stock_flags[0]);
	else if (check_n_c(&var->stock_flags[0], '*', i))
	{
		var->flag_star[0] = va_arg(var->ap, int);
		if (check_n_c(&var->stock_flags[0], '-', i) && \
			var->flag_star[0] > 0)
			var->flag_star[0] = -var->flag_star[0];
	}
	var->nb_param = 1;
	if (var->stock_flags[i + 1])
	{
		if (check_nb(&var->stock_flags[i + 1]) && \
			!check_c(&var->stock_flags[i + 1], '*'))
			var->flag_star[1] = ft_atoi(&var->stock_flags[i + 1]);
		else if (check_c(&var->stock_flags[i], '*'))
			var->flag_star[1] = va_arg(var->ap, int);
		var->nb_param = 2;
	}
}
