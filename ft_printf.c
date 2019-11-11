/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:17:20 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/11 12:39:34 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	init_var(t_printf *var)
{
	var->c = 0;
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
	free(var->str);
	var->str = NULL;
	if (var->stock_flags)
	{
		free(var->stock_flags);
		var->stock_flags = NULL;
	}
}

void	conversion(char c, t_printf *var, int *count)
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

void	flag_just_nb(t_printf *var, int *count, int len_param)
{
	int i;
	int len;

	i = 0;
	if ((len = len_param - ft_strlen(var->str)) <= 0)
		len = 0;
	if (var->nbr < 0)
		len--;
	while (var->stock_flags[i] == '0')
		i++;
	if (i > 0)
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

void	flag_no_dot(t_printf *var, int *count)
{
	
}

void	flag_dot_nbr(t_printf *var, int *count)
{
	int i;
	int len_abs;

	i = 0;
	len_abs = ABS(var->flag_star[0]);
	while (var->stock_flags[i] != '.')
		i++;
	if (i == 0)
	{
		if (var->nbr < 0)
			ft_putchar_fd('-', 1, count);
		print_zeros(var, count, var->flag_star[1] - ft_strlen(var->str));
		ft_putstr_fd(var->str, 1, count);
	}
	else if (i > 0)
	{
		if (var->nb_param == 1)
			print_one_star(var, count, len_abs);
		else if (var->nb_param == 2)
		{
			if (var->nbr < 0)
			{
				var->flag_star[0]--;
				len_abs--;
			}
			print_two_stars(var, count, len_abs);
		}
	}
}

void	flag_dot_str(t_printf *var, int *count)
{
	int i;
	int len_abs;

	i = 0;
	len_abs = ABS(var->flag_star[0]);
	while (var->stock_flags[i] != '.')
		i++;
	if (i == 0)
		ft_putstr_fd(var->str, 1, count);
	else if (i > 0)
	{
		if (var->nb_param == 1)
			print_spaces(var, count, len_abs);
		else if (var->nb_param == 2)
		{
			if (var->flag_star[0] >= 0)
				print_spaces(var, count, var->flag_star[0] - ft_strlen(var->str));
			ft_putstr_fd(var->str, 1, count);
			if (var->flag_star[0] < 0)
				print_spaces(var, count, len_abs - ft_strlen(var->str));
		}
	}
}

void	print_flags(t_printf *var, int *count, int val)
{
	int i;

	i = 0;
	if (check_nb(var->stock_flags) && !check_c(var->stock_flags, '*') \
		&& !check_c(var->stock_flags, '.'))
		flag_just_nb(var, count, ft_atoi(var->stock_flags));
	if (check_c(var->stock_flags, '*') && !check_c(var->stock_flags, '.'))
		flag_just_star(var, count);
	if (check_c(var->stock_flags, '.'))
	{
		if (val == 1)
			flag_dot_nbr(var, count);
		if (val == 2)
			flag_dot_str(var, count);
	}
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
				conversion(str[i], &var, &count);
				if (str[i] && (str[i] == 'd' || str[i] == 'i' || str[i] == 'u'
						|| str[i] == 'x' || str[i] == 'X'))
				{
					if (!var.stock_flags)
						print_param(str[i], &var, &count);
					else if (var.stock_flags)
						print_flags(&var, &count, 1);
				}
				else if (str[i] && (str[i] == 'c' || str[i] == 's' || str[i] == 'p'
						|| str[i] == '%'))
				{
					if (!var.stock_flags)
						print_param(str[i], &var, &count);
					else if (var.stock_flags)
						print_flags(&var, &count, 2);
				}
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
