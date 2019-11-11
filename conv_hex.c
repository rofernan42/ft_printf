/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:17:20 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/11 17:32:12 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	conv_p(t_printf *var, int *count)
{
	uintptr_t	addr;
	char		*tmp;

	addr = (uintptr_t)(va_arg(var->ap, void *));
	tmp = ft_strdup("0x");
	var->str = ft_strjoin_free(tmp, \
							ft_convert_base_uintptr(ft_itoa_uintptr(addr), \
							"0123456789", "0123456789abcdef"), 2);
	return (ft_strlen(var->str));
}

int	conv_lower_x(t_printf *var, int *count)
{
	int tmp;

	tmp = va_arg(var->ap, int);
	if (tmp == 0 && var->nb_param > 0 && var->flag_star[1] == 0)
		var->str = ft_strdup("");
	else
		var->str = ft_convert_base(ft_itoa(tmp), \
										"0123456789", "0123456789abcdef");
	return (ft_strlen(var->str));
}

int	conv_upper_x(t_printf *var, int *count)
{
	int tmp;

	tmp = va_arg(var->ap, int);
	if (tmp == 0 && var->nb_param > 0 && var->flag_star[1] == 0)
		var->str = ft_strdup("");
	else
		var->str = ft_convert_base(ft_itoa(tmp), \
										"0123456789", "0123456789ABCDEF");
	return (ft_strlen(var->str));
}
