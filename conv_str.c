/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:17:20 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/11 18:45:13 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	conv_c(t_printf *var, int *count)
{
	var->c = va_arg(var->ap, unsigned int);
	var->str = ft_strdup(" ");
	var->str[0] = var->c;
	return (1);
}

int	conv_s(t_printf *var, int *count)
{
	va_list	tmp;
	char	*strtmp;

	va_copy(tmp, var->ap);
	if (!va_arg(tmp, char*))
	{
		va_arg(var->ap, char*);
		va_end(tmp);
		return (0);
	}
	if (var->nb_param > 0)
	{
		strtmp = ft_strdup(va_arg(var->ap, char*));
		var->str = ft_strndup(strtmp, var->flag_star[1]);
		free(strtmp);
		strtmp = NULL;
	}
	else
		var->str = ft_strdup(va_arg(var->ap, char*));
	va_end(tmp);
	return (ft_strlen(var->str));
}

int	conv_pcent(t_printf *var, int *count)
{
	var->str = ft_strdup("%");
	return (ft_strlen(var->str));
}
