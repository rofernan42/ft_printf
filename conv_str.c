/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:17:20 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/08 19:04:17 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	conv_c(t_printf *var, int *count)
{
	var->str = ft_strdup(" ");
	var->str[0] = va_arg(var->ap, unsigned int);
	return (1);
}

int	conv_s(t_printf *var, int *count)
{
	var->str = ft_strdup(va_arg(var->ap, char*));
	return (ft_strlen(var->str));
}

int	conv_pcent(t_printf *var, int *count)
{
	var->str = ft_strdup("%");
	return (ft_strlen(var->str));
}
