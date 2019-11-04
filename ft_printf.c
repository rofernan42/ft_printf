/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:17:20 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/04 18:44:24 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// int		conversion()

void	init_var(t_printf *var)
{
	var->c = 0;
	var->str = NULL;
	var->p = 0;
	var->d = 0;
	var->u = 0;
}

void	conv_c(t_printf *var, int *count)
{
	var->c = va_arg(var->ap, unsigned int);
	ft_putchar_fd(var->c, 1, count);
}

void	conv_s(t_printf *var, int *count)
{
	var->str = ft_strdup(va_arg(var->ap, char*));
	ft_putstr_fd(var->str, 1, count);
	free(var->str);
	var->str = NULL;
}

// void	conv_p(t_printf *var, int *count)
// {
// 	char *tmp;

// 	var->p = va_arg(var->ap, void*);
// 	tmp = malloc(sizeof(var->p));
// 	ft_memcpy(tmp, &var->p, sizeof(var->p));
// 	ft_putstr_fd(tmp, 1, count);
	
// }

void	conv_di(t_printf *var, int *count)
{
	var->str = ft_itoa(va_arg(var->ap, int));
	ft_putstr_fd(var->str, 1, count);
	free(var->str);
	var->str = NULL;
}

void	conv_u(t_printf *var, int *count)
{
	var->str = ft_itoa_uns(va_arg(var->ap, unsigned int));
	ft_putstr_fd(var->str, 1, count);
	free(var->str);
	var->str = NULL;
}

void	conv_x(t_printf *var, int *count)
{
	var->str = ft_convert_base(ft_itoa(va_arg(var->ap, int)), \
										"0123456789", "0123456789abcdef");
	ft_putstr_fd(var->str, 1, count);
	free(var->str);
	var->str = NULL;
}

void	conv_X(t_printf *var, int *count)
{
	var->str = ft_convert_base(ft_itoa(va_arg(var->ap, int)), \
										"0123456789", "0123456789ABCDEF");
	ft_putstr_fd(var->str, 1, count);
	free(var->str);
	var->str = NULL;
}

void	conversion(char c, t_printf *var, int *count)
{
	if (c == 'c')
		conv_c(var, count);
	else if (c == 's')
		conv_s(var, count);
//	else if (c == 'p')
//		conv_p(var, count);
	else if (c == 'd' || c == 'i')
		conv_di(var, count);
	else if (c == 'u')
		conv_u(var, count);
	else if (c == 'x')
		conv_x(var, count);
	else if (c == 'X')
		conv_X(var, count);
	else if (c == '%')
		ft_putchar_fd('%', 1, count);
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
			i++;
			if (str[i] && (str[i] == '-' || str[i] == '0' || str[i] == '.'
			|| str[i] == '*'))
			{
				i++;
			}
			if (str[i] && (str[i] == 'c' || str[i] == 's' || str[i] == 'p' || str[i] == 'd'
			|| str[i] == 'i' || str[i] == 'u' || str[i] == 'x' || str[i] == 'X'
			|| str[i] == '%'))
			{
				init_var(&var);
				conversion(str[i], &var, &count);
				i++;
			}
		}
		if (str[i] && str[i] != '%')
		{
			ft_putchar_fd(str[i], 1, &count);
			i++;
		}
	}
	printf("%d\n", count);
	return (count);
}
