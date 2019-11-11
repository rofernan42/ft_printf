/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_types.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:03:47 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/11 16:20:23 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	print_zeros(t_printf *var, int *count, int len)
{
	while (len > 0)
	{
		ft_putchar_fd('0', 1, count);
		len--;
	}
}

void	print_spaces(t_printf *var, int *count, int len)
{
	while (len > 0)
	{
		ft_putchar_fd(' ', 1, count);
		len--;
	}
}

void	print_minus(t_printf *var, int *count, int len)
{
	if (var->nbr < 0)
		ft_putchar_fd('-', 1, count);
	ft_putstr_fd(var->str, 1, count);
	while (len > 0)
	{
		ft_putchar_fd(' ', 1, count);
		len--;
	}
}

void	print_no_flag(char c, t_printf *var, int *count)
{
	if (c == 'c')
		ft_putchar_fd(var->c, 1, count);
	if (c == 'p')
	{
		ft_putstr_fd("0x", 1, count);
		ft_putstr_fd(var->p, 1, count);
	}
	else
	{
		if (var->nbr < 0)
			ft_putchar_fd('-', 1, count);
		ft_putstr_fd(var->str, 1, count);
	}
}

void	print_flags(t_printf *var, int *count, int val)
{
	int i;

	i = 0;
	if (!check_c(var->stock_flags, '.'))
		flag_no_dot(var, count);
	if (check_c(var->stock_flags, '.'))
	{
		if (val == 1)
			flag_dot_nbr(var, count);
		if (val == 2)
			flag_dot_str(var, count);
	}
}
