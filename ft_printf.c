/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:17:20 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/05 16:36:03 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	init_var(t_printf *var)
{
	var->c = 0;
	var->str = NULL;
	var->p = 0;
}

void	conversion(char c, t_printf *var, int *count)
{
	if (c == 'c')
		conv_c(var, count);
	else if (c == 's')
		conv_s(var, count);
	// else if (c == 'p')
	// 	conv_p(var, count, sizeof(var->p));
	else if (c == 'd' || c == 'i')
		conv_di(var, count);
	else if (c == 'u')
		conv_u(var, count);
	else if (c == 'x')
		conv_lower_x(var, count);
	else if (c == 'X')
		conv_upper_x(var, count);
	else if (c == '%')
		ft_putchar_fd('%', 1, count);
}

void	flag_dot(const char *str, t_printf *var, int *count)
{
	int	len_flag;
	int	len_var;
	int	i;

	i = 0;
	if (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			len_flag = ft_atoi(&*str);
			len_var = ft_strlen(var->str);
			if ((len_flag = len_flag - len_var) <= 0)
				return ;
			while (i < len_flag)
			{
				ft_putchar_fd('0', 1, count);
				i++;
			}
		}
		else if (*str == '*')
			return ;
	}
	else
		return ;
}

void	flag_nbr(const char *str, t_printf *var, int *count)
{
	int len_flag1;
	int len_flag2;
	int i;

	i = 0;
	len_flag1 = ft_atoi(&*str);
	len_flag2 = 0;
	while (*str)
	{
		if (*str == '.')
		{
			str++;
			if (*str >= '0' && *str <= '9')
			{
				len_flag2 = ft_atoi(&*str);
				break ;
			}
		}
		str++;
	}
	if ((len_flag1 = len_flag1 - len_flag2) <= 0)
		return ;
	else
	{
		while (i < len_flag1)
		{
			ft_putchar_fd(' ', 1, count);
			i++;
		}
	}
}

void	print_flags(char *flags, t_printf *var, int *count)
{
	int i;

	i = 0;
	// if (flags[i] == '-')
	if (flags[i] >= '0' && flags[i] <= '9')
		flag_nbr(&flags[i], var, count);
	while (flags[i] >= '0' && flags[i] <= '9')
		i++;
	if (flags[i] == '.')
		flag_dot(&flags[i + 1], var, count);
	// else if (flags[i] == '*')
	free(flags);
	flags = NULL;
}

void	print_param(char c, t_printf *var, int *count)
{
	if (c == 'c')
		ft_putchar_fd(var->c, 1, count);
	else
		ft_putstr_fd(var->str, 1, count);
	free(var->str);
	var->str = NULL;
}

int		ft_printf(const char *str, ...)
{
	int			i;
	int			j;
	int			k;
	int			count;
	int			nb_flags;
	char		*flags;
	t_printf	var;

	i = 0;
	count = 0;
	va_start(var.ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			j = i;
			nb_flags = 0;
			flags = NULL;
			while (str[i] && (str[i] == '-' || str[i] == '.'
			|| str[i] == '*' || (str[i] >= '0' && str[i] <= '9')))
			{
				i++;
				nb_flags++;
			}
			if (nb_flags > 0)
			{
				flags = malloc(sizeof(char) * (nb_flags + 1));
				k = 0;
				while (str[j] && (str[j] == '-' || str[j] == '.'
				|| str[j] == '*' || (str[j] >= '0' && str[j] <= '9')))
					flags[k++] = str[j++];
				flags[k] = '\0';
			}
			if (str[i] && (str[i] == 'c' || str[i] == 's' || str[i] == 'p'
			|| str[i] == 'd' || str[i] == 'i' || str[i] == 'u'
			|| str[i] == 'x' || str[i] == 'X' || str[i] == '%'))
			{
				init_var(&var);
				conversion(str[i], &var, &count);
				if (flags)
					print_flags(flags, &var, &count);
				print_param(str[i], &var, &count);
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
	printf("%d\n", count);
	return (count);
}
