/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:42:24 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/04 16:41:52 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int n, int fd, int *count)
{
	unsigned int temp;

	if (n < 0)
	{
		ft_putchar_fd('-', fd, count);
		temp = -n;
	}
	else
		temp = n;
	if (temp < 10)
		ft_putchar_fd(temp + '0', fd, count);
	else
	{
		ft_putnbr_fd(temp / 10, fd, count);
		ft_putchar_fd(temp % 10 + '0', fd, count);
	}
}
