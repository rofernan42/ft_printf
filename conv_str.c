/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:17:20 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/08 17:13:33 by rofernan         ###   ########.fr       */
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
