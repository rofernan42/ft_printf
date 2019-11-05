/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:17:20 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/05 14:17:23 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	conv_c(t_printf *var, int *count)
{
	var->c = va_arg(var->ap, unsigned int);
	return (1);
}

int	conv_s(t_printf *var, int *count)
{
	var->str = ft_strdup(va_arg(var->ap, char*));
	return (ft_strlen(var->str));
}

// void	conv_p(t_printf *var, int *count, size_t size)
// {
// 	size_t i;
// 	int g;

// 	i = 0;
// 	while (i < size)
// 	{
// 		g = (pc[i] >> 4) & 0xf;
// 		g += g >= 10 ? 'a' - 10 : '0';
// 		ft_putchar_fd(g, 1, count);
// 		printed++;
// 		i++;
// 	}
// }
