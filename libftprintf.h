/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:37:56 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/12 12:37:04 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** gerer conversions: cspdiuxX%   char c; char* s; char* p; int d; int i; 
**									unsigned int u; char *x *X;
** gerer combinaison de flags '-0.*' et taille champ minimale
** bonus: gerer conversions: nfge
** bonus: gerer flags: l ll h hh
** bonus: gerer flags: '#+ espace'
** http://www.cplusplus.com/reference/cstdio/printf/
** https://codes-sources.commentcamarche.net/faq/877-les-fonctions-a-nombre-variable-d-arguments
*/

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "./Libft/libft.h"

# define ABS(x)	(x < 0) ? -x : x

typedef	struct	s_printf
{
	va_list			ap;
	char			c;
	char			*str;
	int				nbr; //nombre pour stocker int pour checker si le parametre est negatif pour bien placer les '-'
	char			*stock_flags; //chaine qui stocke tous les flags apres le %
	int				flag_star[2]; //pointeur sur int qui va stocker tous les parametres correspondant aux * apres le %
	int				nb_param; //nombre de parametres autour du '.' (1 ou 2)
	int				*n;// conversion n: aucun flag tolere; stocke le nombre de caracteres ecrits AVANT le %n dans un pointeur sur int
	float			f;
	// ???			g;
	char			*e;
}				t_printf;

/*
** CHECK_ELEM.C ================================================================
*/
int				check_c(char *str, char c);
int				check_n_c(char *str, char c, int n);
int				check_nb(char *str);
int				check_n_nb(char *str, int n);
int				find_c(char *str, char c);

/*
** COUNT_ELEMS.C ===============================================================
*/
int				count_elem(char *str, char c);
int				count_zeros(char *str);

/*
** INIT_FREE_VAR.C ================================================================
*/
void			init_var(t_printf *var);
void			free_var(t_printf *var);

/*
** INIT_FLAGS.C ================================================================
*/
int				check_flags(const char *str, t_printf *var);
void			assign_param(t_printf *var);
void			assign_param_dot(t_printf *var);

/*
** CASE_FLAGS.C ================================================================
*/
void			flag_no_dot(t_printf *var, int *count);
void			flag_dot_nbr(t_printf *var, int *count);
void			flag_dot_str(t_printf *var, int *count);

/*
** PRINT_TYPES.C ===============================================================
*/
void			print_zeros(int *count, int len);
void			print_spaces(int *count, int len);
void			print_minus(t_printf *var, int *count, int len);
void			print_no_flag(t_printf *var, int *count);
void			print_flags(t_printf *var, int *count, int val);

/*
** PRINT_FLAGS.C ===============================================================
*/
void			print_params(t_printf *var, int *count, int len_abs);

/*
** CONV_*.C ====================================================================
*/
int				conv_c(t_printf *var);
int				conv_s(t_printf *var);
int				conv_p(t_printf *var);
int				conv_di(t_printf *var);
int				conv_u(t_printf *var);
int				conv_lower_x(t_printf *var);
int				conv_upper_x(t_printf *var);
int				conv_pcent(t_printf *var);

/*
** CONV_BONUS.C ====================================================================
*/
int				conv_n(t_printf *var, int *count);
int				conv_f(t_printf *var);
int				conv_g(t_printf *var);
int				conv_e(t_printf *var);

/*
** CONVERSION.C ====================================================================
*/
void	conversion_param(char c, t_printf *var);
void	conversion_bonus(char c, t_printf *var, int *count);

/*
** FT_PRINTF.C =================================================================
*/
int				ft_printf(const char *str, ...);

#endif
