/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 18:28:02 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/26 17:19:02 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

char	*ft_conv_x(unsigned int nbr, char *base)
{
	char			*str_nbr;
	int				size_dest;
	unsigned int	tmp;

	size_dest = 1;
	tmp = nbr;
	while ((tmp / 16) > 0)
	{
		tmp = tmp / 16;
		size_dest++;
	}
	if (!(str_nbr = malloc(sizeof(char) * (size_dest + 1))))
		return (NULL);
	str_nbr[size_dest] = '\0';
	while (size_dest > 0)
	{
		str_nbr[size_dest - 1] = base[nbr % 16];
		nbr = nbr / 16;
		size_dest--;
	}
	return (str_nbr);
}

char	*ft_conv_ptr(uintptr_t nbr, char *base)
{
	char		*str_nbr;
	int			size_dest;
	uintptr_t	tmp;

	size_dest = 1;
	tmp = nbr;
	while ((tmp / 16) > 0)
	{
		tmp = tmp / 16;
		size_dest++;
	}
	if (!(str_nbr = malloc(sizeof(char) * (size_dest + 1))))
		return (NULL);
	str_nbr[size_dest] = '\0';
	while (size_dest > 0)
	{
		str_nbr[size_dest - 1] = base[nbr % 16];
		nbr = nbr / 16;
		size_dest--;
	}
	return (str_nbr);
}
