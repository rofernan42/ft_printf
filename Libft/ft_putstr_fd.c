/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:27:27 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/13 14:58:52 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_putstr_fd(char *s, int fd, int *count)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, &*s++, 1);
		*count = *count + 1;
	}
}
