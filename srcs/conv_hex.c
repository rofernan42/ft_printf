/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:17:20 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/25 16:55:50 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int	conv_p(t_printf *var)
{
	uintptr_t	addr;
	char		*nbr;

	addr = (uintptr_t)(va_arg(var->ap, void *));
	var->p = 1;
	if (addr == 0 && var->nb_param > 0 && var->flag_star[1] == 0)
		var->str = ft_strdup("");
	else
		var->str = ft_conv_ptr(addr, "0123456789abcdef");
	return (ft_strlen(var->str));
}

int	conv_lower_x(t_printf *var)
{
	int	tmp;

	tmp = va_arg(var->ap, int);
	if (tmp == 0 && var->nb_param > 0 && var->flag_star[1] == 0)
		var->str = ft_strdup("");
	else
		var->str = ft_conv_x(tmp, "0123456789abcdef");
	return (ft_strlen(var->str));
}

int	conv_upper_x(t_printf *var)
{
	int	tmp;

	tmp = va_arg(var->ap, int);
	if (tmp == 0 && var->nb_param > 0 && var->flag_star[1] == 0)
		var->str = ft_strdup("");
	else
		var->str = ft_conv_x(tmp, "0123456789ABCDEF");
	return (ft_strlen(var->str));
}
