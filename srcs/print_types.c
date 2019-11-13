/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_types.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:03:47 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/13 11:56:20 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	print_zeros(int *count, int len)
{
	while (len > 0)
	{
		ft_putchar_fd('0', 1, count);
		len--;
	}
}

void	print_spaces(int *count, int len)
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
	if (var->p == 1)
		ft_putstr_fd("0x", 1, count);
	if (var->c == 0)
		write(1, &var->c, 1);
	else
		ft_putstr_fd(var->str, 1, count);
	while (len > 0)
	{
		ft_putchar_fd(' ', 1, count);
		len--;
	}
}

void	print_no_flag(t_printf *var, int *count)
{
	if (var->nbr < 0)
		ft_putchar_fd('-', 1, count);
	if (var->p == 1)
		ft_putstr_fd("0x", 1, count);
	if (var->c == 0)
		ft_putchar_fd(var->c, 1, count);
	else
		ft_putstr_fd(var->str, 1, count);
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
