/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:49:47 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/14 16:13:33 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static int		len_prec(t_printf *var, int len_abs, int val)
{
	int len;
	int test;

	test = var->flag_star[1] - ft_strlen(var->str);
	if (val == 1)
	{
		if (test < 0)
			len = var->flag_star[0] - ft_strlen(var->str);
		else
			len = var->flag_star[0] - var->flag_star[1];
	}
	if (val == 2)
		len = var->flag_star[1] - ft_strlen(var->str);
	if (val == 3)
	{
		if (test < 0)
			len = len_abs - ft_strlen(var->str);
		else
			len = len_abs - var->flag_star[1];
	}
	if (val == 4)
		len = var->flag_star[0] - ft_strlen(var->str);
	if (val == 5)
		len = len_abs - ft_strlen(var->str);
	return (len);
}

static void		print_prefix(t_printf *var, int *count)
{
	if (var->nbr < 0)
		ft_putchar_fd('-', 1, count);
	if (var->p == 1)
		ft_putstr_fd("0x", 1, count);
}

void			print_params(t_printf *var, int *count, int len_abs)
{
	if (var->flag_star[0] >= 0 && var->flag_star[1] >= 0)
	{
		print_spaces(count, len_prec(var, len_abs, 1));
		print_prefix(var, count);
		print_zeros(count, len_prec(var, len_abs, 2));
		ft_putstr_fd(var->str, 1, count);
	}
	else if (var->flag_star[0] < 0 && var->flag_star[1] >= 0)
	{
		print_prefix(var, count);
		print_zeros(count, len_prec(var, len_abs, 2));
		ft_putstr_fd(var->str, 1, count);
		print_spaces(count, len_prec(var, len_abs, 3));
	}
	else if (var->flag_star[0] >= 0 && var->flag_star[1] < 0)
	{
		print_spaces(count, len_prec(var, len_abs, 4));
		print_prefix(var, count);
		ft_putstr_fd(var->str, 1, count);
	}
	else if (var->flag_star[0] < 0 && var->flag_star[1] < 0)
		print_minus(var, count, len_prec(var, len_abs, 5));
}
