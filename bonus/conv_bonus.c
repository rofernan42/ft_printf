/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:17:20 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/12 15:01:36 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int	conv_n(t_printf *var, int *count)
{
	int *tmp;

	tmp = va_arg(var->ap, int*);
	*tmp = *count;
	var->str = ft_strdup("");
	return (0);
}

int	conv_f(t_printf *var)
{
	return (0);
}

int	conv_g(t_printf *var)
{
	return (0);
}

int	conv_e(t_printf *var)
{
	return (0);
}
