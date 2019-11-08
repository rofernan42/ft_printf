/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_nbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:17:20 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/08 17:14:09 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	conv_di(t_printf *var, int *count)
{
	int tmp;

	var->nbr = va_arg(var->ap, int);
	if (var->nbr < 0)
		tmp = -var->nbr;
	else
		tmp = var->nbr;
	var->str = ft_itoa_uns(tmp);
	return (ft_strlen(var->str));
}

int	conv_u(t_printf *var, int *count)
{
	var->str = ft_itoa_uns(va_arg(var->ap, unsigned int));
	return (ft_strlen(var->str));
}
