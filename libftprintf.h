/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:37:56 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/05 14:09:34 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**gerer conversions: cspdiuxX%   char c; char* s; char* p; int d; int i; unsigned int u; char *x *X;
**gerer combinaison de flags '-0.*' et taille champ minimale
**bonus: gerer conversions: nfge
**bonus: gerer flags: l ll h hh
**bonus: gerer flags: '#+ espace'
**http://www.cplusplus.com/reference/cstdio/printf/
**https://codes-sources.commentcamarche.net/faq/877-les-fonctions-a-nombre-variable-d-arguments
*/

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "./Libft/libft.h"

typedef	struct	s_printf
{
	va_list			ap;
	int				c;
	char			*str; //*s, *x, *X
	void			*p;
	// int				d;
	// unsigned int	u;
/*
**	====== Bonus ======
*/
	// ???			n;
	float			f;
	// ???			g;
	char			*e;
}				t_printf;

int				conv_c(t_printf *var, int *count);
int				conv_s(t_printf *var, int *count);
// void			conv_p(t_printf *var, int *count, size_t size);
int				conv_di(t_printf *var, int *count);
int				conv_u(t_printf *var, int *count);
int				conv_lower_x(t_printf *var, int *count);
int				conv_upper_x(t_printf *var, int *count);
int				ft_printf(const char *str, ...);

#endif