/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_free_var.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 10:52:18 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/12 18:33:52 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	init_var(t_printf *var)
{
	var->c = 'a';
	var->str = NULL;
	var->p = 0;
	var->nbr = 0;
	var->stock_flags = NULL;
	var->flag_star[0] = 0;
	var->flag_star[1] = 0;
	var->nb_param = 0;
}

void	free_var(t_printf *var)
{
	if (var->str)
	{
		free(var->str);
		var->str = NULL;
	}
	if (var->stock_flags)
	{
		free(var->stock_flags);
		var->stock_flags = NULL;
	}
}
