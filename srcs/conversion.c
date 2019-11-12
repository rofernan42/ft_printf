/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:13:28 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/12 15:01:54 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	conversion_param(char c, t_printf *var)
{
	if (c == 'c')
		conv_c(var);
	else if (c == 's')
		conv_s(var);
	else if (c == 'p')
		conv_p(var);
	else if (c == 'd' || c == 'i')
		conv_di(var);
	else if (c == 'u')
		conv_u(var);
	else if (c == 'x')
		conv_lower_x(var);
	else if (c == 'X')
		conv_upper_x(var);
	else if (c == '%')
		conv_pcent(var);
}
