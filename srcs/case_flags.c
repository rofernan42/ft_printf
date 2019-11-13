/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:22:57 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/13 17:07:42 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static void	print_prefix(t_printf *var, int *count)
{
	if (var->nbr < 0)
		ft_putchar_fd('-', 1, count);
	if (var->p == 1)
		ft_putstr_fd("0x", 1, count);
}

static void	char_or_str(t_printf *var, int *count)
{
	if (var->c == 0)
		ft_putchar_fd(var->c, 1, count);
	else
		ft_putstr_fd(var->str, 1, count);
}

void		flag_no_dot(t_printf *var, int *count)
{
	int len;
	int len_abs;

	len_abs = ABS(var->flag_star[0]);
	if ((len = len_abs - ft_strlen(var->str)) <= 0)
		len = 0;
	(var->nbr < 0 || var->c == 0) ? len-- : len;
	(var->p == 1) ? len = len - 2 : len;
	if (var->flag_star[0] >= 0)
	{
		if (count_zeros(var->stock_flags) > 0)
		{
			print_prefix(var, count);
			print_zeros(count, len);
		}
		else
		{
			print_spaces(count, len);
			print_prefix(var, count);
		}
		char_or_str(var, count);
	}
	else if (var->flag_star[0] < 0)
		print_minus(var, count, len);
}

void		flag_dot_nbr(t_printf *var, int *count)
{
	int len_abs;

	len_abs = ABS(var->flag_star[0]);
	if (var->nbr < 0)
	{
		var->flag_star[0]--;
		len_abs--;
	}
	if (var->p == 1)
	{
		var->flag_star[0] = var->flag_star[0] - 2;
		len_abs = len_abs - 2;
	}
	print_params(var, count, len_abs);
}

void		flag_dot_str(t_printf *var, int *count)
{
	int len_abs;

	len_abs = ABS(var->flag_star[0]);
	if (var->c == 0)
	{
		len_abs--;
		var->flag_star[0]--;
	}
	if (find_c(var->stock_flags, '.', 1) == 0)
		char_or_str(var, count);
	else if (find_c(var->stock_flags, '.', 1) > 0)
	{
		if (var->nb_param == 1)
			print_spaces(count, len_abs);
		else if (var->nb_param == 2)
		{
			if (var->flag_star[0] >= 0)
				print_spaces(count, var->flag_star[0] - \
											ft_strlen(var->str));
			char_or_str(var, count);
			if (var->flag_star[0] < 0)
				print_spaces(count, len_abs - ft_strlen(var->str));
		}
	}
}
