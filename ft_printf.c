/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:17:20 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/11 18:49:21 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	init_var(t_printf *var)
{
	var->c = 'a';
	var->str = NULL;
	var->p = 0;
	var->nbr = 0;
	var->stock_flags = NULL;
	var->flag_star[0] = 0;
	var->flag_star[1] = 0;
	var->nb_param = 0;
}

void	free_var(t_printf *var)
{
	if (var->str)
	{
		free(var->str);
		var->str = NULL;
	}
	if (var->stock_flags)
	{
		free(var->stock_flags);
		var->stock_flags = NULL;
	}
}

void	conversion_param(char c, t_printf *var, int *count)
{
	if (c == 'c')
		conv_c(var, count);
	else if (c == 's')
		conv_s(var, count);
	else if (c == 'p')
		conv_p(var, count);
	else if (c == 'd' || c == 'i')
		conv_di(var, count);
	else if (c == 'u')
		conv_u(var, count);
	else if (c == 'x')
		conv_lower_x(var, count);
	else if (c == 'X')
		conv_upper_x(var, count);
	else if (c == '%')
		conv_pcent(var, count);
}

void	print_all(char c, t_printf *var, int *count, int val)
{
	if (!var->stock_flags)
		print_no_flag(c, var, count);
	else if (var->stock_flags)
		print_flags(var, count, val);
}

int		ft_printf(const char *str, ...)
{
	int			i;
	int			j;
	int			count;
	t_printf	var;

	i = 0;
	j = 0;
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
				if (var.stock_flags && !check_c(var.stock_flags, '.'))
					assign_param(&var);
				if (var.stock_flags && check_c(var.stock_flags, '.'))
					assign_param_dot(&var);
				conversion_param(str[i], &var, &count);
				if (var.str)
				{
					if (str[i] && (str[i] == 'd' || str[i] == 'i' \
					|| str[i] == 'u' || str[i] == 'x' || str[i] == 'X'))
						print_all(str[i], &var, &count, 1);
					else if (str[i] && (str[i] == 'c' || str[i] == 's' \
					|| str[i] == 'p' || str[i] == '%'))
						print_all(str[i], &var, &count, 2);
				}
				else
					ft_putstr_fd("(null)", 1, &count);
				free_var(&var);
				i++;
			}
		}
		if (str[i] && str[i] != '%')
		{
			ft_putchar_fd(str[i], 1, &count);
			i++;
		}
	}
	va_end(var.ap);
	// printf("%d\n", count);
	return (count);
}
