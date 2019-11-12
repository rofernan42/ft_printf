/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:17:20 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/12 11:17:06 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	conv_p(t_printf *var)
{
	uintptr_t	addr;
	char		*tmp;
	char		*nbr;

	addr = (uintptr_t)(va_arg(var->ap, void *));
	tmp = ft_strdup("0x");
	nbr = ft_itoa_uintptr(addr);
	var->str = ft_strjoin_free(tmp, \
							ft_convert_base_uintptr(nbr, \
							"0123456789", "0123456789abcdef"), 2);
	free(nbr);
	nbr = NULL;
	return (ft_strlen(var->str));
}

int	conv_lower_x(t_printf *var)
{
	int		tmp;
	char	*nbr;

	tmp = va_arg(var->ap, int);
	nbr = ft_itoa(tmp);
	if (tmp == 0 && var->nb_param > 0 && var->flag_star[1] == 0)
		var->str = ft_strdup("");
	else
		var->str = ft_convert_base(nbr, "0123456789", "0123456789abcdef");
	free(nbr);
	nbr = NULL;
	return (ft_strlen(var->str));
}

int	conv_upper_x(t_printf *var)
{
	int		tmp;
	char	*nbr;

	tmp = va_arg(var->ap, int);
	nbr = ft_itoa(tmp);
	if (tmp == 0 && var->nb_param > 0 && var->flag_star[1] == 0)
		var->str = ft_strdup("");
	else
		var->str = ft_convert_base(nbr, "0123456789", "0123456789ABCDEF");
	free(nbr);
	nbr = NULL;
	return (ft_strlen(var->str));
}
