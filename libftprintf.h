/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:37:56 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/08 12:53:07 by rofernan         ###   ########.fr       */
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

# define ABS(x)	(x < 0) ? -x : x

typedef	struct	s_printf
{
	va_list			ap;
	int				c; // char %c
	char			*str; //chaine qui stocke les %d et %s %p etc
	void			*p;
	int				nbr; //nombre pour stocker int pour checker si le parametre est negatif pour bien placer les '-'
	char			*stock_flags; // chaine qui stocke tous les flags apres le %
	int				*flag_star; // pointeur sur int qui va stocker tous les parametres correspondant aux * apres le %
	// unsigned int	u;
/*
**	====== Bonus ======
*/
	// ???			n;
	float			f;
	// ???			g;
	char			*e;
}				t_printf;

/*
** check_elem.c
*/
int				check_c(char *str, char c);
int				check_nb(char *str);
int		count_elem(char *str, char c);

/*
** init_flags.c
*/
int		check_flags(const char *str, t_printf *var);
void	assign_param_star(t_printf *var);

/*
** print_types.c
*/
void	print_zeros(t_printf *var, int *count, int len);
void	print_spaces(t_printf *var, int *count, int len);
void	print_minus(t_printf *var, int *count, int len);
void	print_param(char c, t_printf *var, int *count);

/*
** print_stars.c
*/
void	flag_just_star(t_printf *var, int *count);
void	print_one_star(t_printf *var, int *count, int len_abs);
void	print_two_stars(t_printf *var, int *count, int len_abs);




/*
** conv_*.c
*/
int				conv_c(t_printf *var, int *count);
int				conv_s(t_printf *var, int *count);
// void			conv_p(t_printf *var, int *count, size_t size);
int				conv_di(t_printf *var, int *count);
int				conv_u(t_printf *var, int *count);
int				conv_lower_x(t_printf *var, int *count);
int				conv_upper_x(t_printf *var, int *count);

/*
** ft_printf.c
*/
int				ft_printf(const char *str, ...);

#endif