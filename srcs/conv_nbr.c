/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_nbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:17:20 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/12 17:54:12 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int	conv_di(t_printf *var)
{
	int tmp;

	var->nbr = va_arg(var->ap, int);
	if (var->nbr < 0)
		tmp = -var->nbr;
	else
		tmp = var->nbr;
	if (var->nbr == 0 && var->nb_param > 0 && var->flag_star[1] == 0)
		var->str = ft_strdup("");
	else
		var->str = ft_itoa_uns(tmp);
	return (ft_strlen(var->str));
}

int	conv_u(t_printf *var)
{
	unsigned int tmp;

	var->u = va_arg(var->ap, unsigned int);
	tmp = var->u;
	if (var->u == 0 && var->nb_param > 0 && var->flag_star[1] == 0)
		var->str = ft_strdup("");
	else
		var->str = ft_itoa_uns(tmp);
	return (ft_strlen(var->str));
}
