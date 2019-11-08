/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:49:47 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/08 17:23:03 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		len_prec(t_printf *var, int len_abs, int val)
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

void	flag_just_star(t_printf *var, int *count)
{
	int len;
	int len_abs;

	len_abs = ABS(var->flag_star[0]);
	if ((len = len_abs - ft_strlen(var->str)) <= 0)
		len = 0;
	(var->nbr < 0) ? len-- : len;
	if (var->flag_star[0] >= 0)
	{
		if (count_elem(var->stock_flags, '0') > 0)
		{
			if (var->nbr < 0)
				ft_putchar_fd('-', 1, count);
			print_zeros(var, count, len);
		}
		else
		{
			print_spaces(var, count, len);
			if (var->nbr < 0)
				ft_putchar_fd('-', 1, count);
		}
		ft_putstr_fd(var->str, 1, count);
	}
	else if (var->flag_star[0] < 0)
		print_minus(var, count, len);
}

void	print_one_star(t_printf *var, int *count, int len_abs)
{
	int len;

	len = var->flag_star[0] - ft_strlen(var->str);
	if (var->flag_star[0] >= 0)
	{
		if (var->nbr >= 0)
			print_spaces(var, count, len);
		else
		{
			print_spaces(var, count, len - 1);
			ft_putchar_fd('-', 1, count);
		}
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
		print_spaces(var, count, len_prec(var, len_abs, 1));
		if (var->nbr < 0)
			ft_putchar_fd('-', 1, count);
		print_zeros(var, count, len_prec(var, len_abs, 2));
		ft_putstr_fd(var->str, 1, count);
	}
	else if (var->flag_star[0] < 0 && var->flag_star[1] >= 0)
	{
		if (var->nbr < 0)
			ft_putchar_fd('-', 1, count);
		print_zeros(var, count, len_prec(var, len_abs, 2));
		ft_putstr_fd(var->str, 1, count);
		print_spaces(var, count, len_prec(var, len_abs, 3));
	}
	else if (var->flag_star[0] >= 0 && var->flag_star[1] < 0)
	{
		print_spaces(var, count, len_prec(var, len_abs, 4));
		if (var->nbr < 0)
			ft_putchar_fd('-', 1, count);
		ft_putstr_fd(var->str, 1, count);
	}
	else if (var->flag_star[0] < 0 && var->flag_star[1] < 0)
		print_minus(var, count, len_prec(var, len_abs, 5));
}
