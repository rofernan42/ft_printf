/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_types.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:03:47 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/08 11:05:39 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	print_zeros(t_printf *var, int *count, int len)
{
	if (var->nbr < 0)
		ft_putchar_fd('-', 1, count);
	while (--len > 0)
		ft_putchar_fd('0', 1, count);
	ft_putstr_fd(var->str, 1, count);
}

void	print_spaces(t_printf *var, int *count, int len)
{
	while (--len > 0)
		ft_putchar_fd(' ', 1, count);
	if (var->nbr < 0)
		ft_putchar_fd('-', 1, count);
	ft_putstr_fd(var->str, 1, count);
}

void	print_minus(t_printf *var, int *count, int len)
{
	if (var->nbr < 0)
		ft_putchar_fd('-', 1, count);
	ft_putstr_fd(var->str, 1, count);
	while (--len > 0)
		ft_putchar_fd(' ', 1, count);
}
