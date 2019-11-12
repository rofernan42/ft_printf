/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:22:57 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/12 10:29:36 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	flag_no_dot(t_printf *var, int *count)
{
	int len;
	int len_abs;

	len_abs = ABS(var->flag_star[0]);
	if ((len = len_abs - ft_strlen(var->str)) <= 0)
		len = 0;
	(var->nbr < 0 || var->c == 0) ? len-- : len;
	if (var->flag_star[0] >= 0)
	{
		if (count_zeros(var->stock_flags) > 0)
		{
			if (var->nbr < 0)
				ft_putchar_fd('-', 1, count);
			print_zeros(count, len);
		}
		else
		{
			print_spaces(count, len);
			if (var->nbr < 0)
				ft_putchar_fd('-', 1, count);
		}
		ft_putstr_fd(var->str, 1, count);
	}
	else if (var->flag_star[0] < 0)
		print_minus(var, count, len);
}

void	flag_dot_nbr(t_printf *var, int *count)
{
	int len_abs;

	len_abs = ABS(var->flag_star[0]);
	if (var->nbr < 0)
	{
		var->flag_star[0]--;
		len_abs--;
	}
	print_params(var, count, len_abs);
}

void	flag_dot_str(t_printf *var, int *count)
{
	int len_abs;

	len_abs = ABS(var->flag_star[0]);
	if (var->c == 0)
	{
		len_abs--;
		var->flag_star[0]--;
	}
	if (find_c(var->stock_flags, '.') == 0)
		ft_putstr_fd(var->str, 1, count);
	else if (find_c(var->stock_flags, '.') > 0)
	{
		if (var->nb_param == 1)
			print_spaces(count, len_abs);
		else if (var->nb_param == 2)
		{
			if (var->flag_star[0] >= 0)
				print_spaces(count, var->flag_star[0] - \
											ft_strlen(var->str));
			ft_putstr_fd(var->str, 1, count);
			if (var->flag_star[0] < 0)
				print_spaces(count, len_abs - ft_strlen(var->str));
		}
	}
}
