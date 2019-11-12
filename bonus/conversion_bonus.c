/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:13:28 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/12 16:35:32 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	conversion_bonus(char c, t_printf *var, int *count)
{
	if (c == 'n')
		conv_n(var, count);
	else if (c == 'f')
		conv_f(var);
	else if (c == 'g')
		conv_g(var);
	else if (c == 'e')
		conv_e(var);
}
