/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:17:20 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/12 11:43:50 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	conversion_param(char c, t_printf *var)
{
	if (c == 'c')
		conv_c(var);
	else if (c == 's')
		conv_s(var);
	else if (c == 'p')
		conv_p(var);
	else if (c == 'd' || c == 'i')
		conv_di(var);
	else if (c == 'u')
		conv_u(var);
	else if (c == 'x')
		conv_lower_x(var);
	else if (c == 'X')
		conv_upper_x(var);
	else if (c == '%')
		conv_pcent(var);
}

void	print_all(t_printf *var, int *count, int val)
{
	if (!var->stock_flags)
		print_no_flag(var, count);
	else if (var->stock_flags)
		print_flags(var, count, val);
}

void	print_conversion(char c, t_printf *var, int *count)
{
	if (var->str)
	{
		if (c && (c == 'd' || c == 'i' \
		|| c == 'u' || c == 'x' || c == 'X'))
			print_all(var, count, 1);
		else if (c && (c == 'c' || c == 's' \
		|| c == 'p' || c == '%'))
			print_all(var, count, 2);
	}
	else
		ft_putstr_fd("(null)", 1, count);
}

void	assign_and_convert(t_printf *var, int *count, char c)
{
	if (var->stock_flags && !check_c(var->stock_flags, '.'))
		assign_param(var);
	if (var->stock_flags && check_c(var->stock_flags, '.'))
		assign_param_dot(var);
	conversion_param(c, var);
	print_conversion(c, var, count);
	free_var(var);
}

int		ft_printf(const char *str, ...)
{
	int			i;
	int			count;
	t_printf	var;

	i = 0;
	count = 0;
	va_start(var.ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			init_var(&var);
			i++;
			if (str[i])
			{
				i = check_flags(&str[i], &var) + i;
				assign_and_convert(&var, &count, str[i]);
				i++;
			}
		}
		if (str[i] && str[i] != '%')
			ft_putchar_fd(str[i++], 1, &count);
	}
	va_end(var.ap);
	return (count);
}
