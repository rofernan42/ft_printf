/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:17:20 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/13 15:15:22 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int	conv_c(t_printf *var)
{
	var->c = va_arg(var->ap, unsigned int);
	var->str = ft_strdup(" ");
	var->str[0] = var->c;
	return (1);
}

int	conv_s(t_printf *var)
{
	char	*strtmp;

	strtmp = ft_strdup(va_arg(var->ap, char*));
	if (var->nb_param > 0)
	{
		if (strtmp)
			var->str = ft_strndup(strtmp, var->flag_star[1]);
		else
			var->str = ft_strndup("(null)", var->flag_star[1]);
	}
	else
	{
		if (strtmp)
			var->str = ft_strdup(strtmp);
		else
			var->str = ft_strdup("(null)");
	}
	if (strtmp)
	{
		free(strtmp);
		strtmp = NULL;
	}
	return (ft_strlen(var->str));
}

int	conv_pcent(t_printf *var)
{
	var->str = ft_strdup("%");
	return (ft_strlen(var->str));
}
