/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:17:20 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/05 14:17:28 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	conv_lower_x(t_printf *var, int *count)
{
	var->str = ft_convert_base(ft_itoa(va_arg(var->ap, int)), \
										"0123456789", "0123456789abcdef");
	return (ft_strlen(var->str));
}

int	conv_upper_x(t_printf *var, int *count)
{
	var->str = ft_convert_base(ft_itoa(va_arg(var->ap, int)), \
										"0123456789", "0123456789ABCDEF");
	return (ft_strlen(var->str));
}
