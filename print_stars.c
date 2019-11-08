/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:49:47 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/08 13:23:10 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	flag_just_star(t_printf *var, int *count)
{
	int len;
	int len_abs;

	len_abs = ABS(var->flag_star[0]);
	if ((len = len_abs - ft_strlen(var->str)) <= 0)
		len = 0;
	if (var->nbr < 0)
		len--;
	if (var->flag_star[0] >= 0)
	{
		if (count_elem(var->stock_flags, '0') > 0)
			print_zeros(var, count, len);
		else
			print_spaces(var, count, len);
		ft_putstr_fd(var->str, 1, count);
	}
	else if (var->flag_star[0] < 0)
		print_minus(var, count, len);
}

void	print_one_star(t_printf *var, int *count, int len_abs)
{
	if (var->flag_star[0] >= 0)
	{
		if (var->nbr >= 0)
			print_spaces(var, count, var->flag_star[0] - ft_strlen(var->str));
		else
			print_spaces(var, count, var->flag_star[0] - ft_strlen(var->str) - 1);
		ft_putstr_fd(var->str, 1, count);
	}
	else if (var->flag_star[0] < 0)
	{
		if (var->nbr >= 0)
			print_minus(var, count, len_abs - ft_strlen(var->str));
		else
			print_minus(var, count, len_abs - ft_strlen(var->str) - 1);
	}
}

void	print_two_stars(t_printf *var, int *count, int len_abs)
{
	if (var->flag_star[0] >= 0 && var->flag_star[1] >= 0)
	{
		print_spaces(var, count, var->flag_star[0] - var->flag_star[1]);
		print_zeros(var, count, var->flag_star[1] - ft_strlen(var->str));
		ft_putstr_fd(var->str, 1, count);
	}
	else if (var->flag_star[0] < 0 && var->flag_star[1] >= 0)
	{
		print_zeros(var, count, var->flag_star[1] - ft_strlen(var->str));
		ft_putstr_fd(var->str, 1, count);
		print_spaces(var, count, len_abs - var->flag_star[1]);
	}
	else if (var->flag_star[0] >= 0 && var->flag_star[1] < 0)
	{
		print_spaces(var, count, var->flag_star[0] - ft_strlen(var->str));
		ft_putstr_fd(var->str, 1, count);
	}
	else if (var->flag_star[0] < 0 && var->flag_star[1] < 0)
		print_minus(var, count, len_abs - ft_strlen(var->str));
}
