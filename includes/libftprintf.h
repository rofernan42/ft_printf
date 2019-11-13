/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:37:56 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/13 14:24:33 by rofernan         ###   ########.fr       */
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

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdint.h>
# include <stdarg.h>

# define ABS(x)	(x < 0) ? -x : x

/*
** ========================== FUNCTIONS LIBFT ==================================
*/
size_t				ft_strlen(const char *str);
int					ft_atoi(const char *str);
char				*ft_strdup(const char *src);
char				*ft_itoa(int n);
void				ft_putchar_fd(char c, int fd, int *count);
void				ft_putstr_fd(char *s, int fd, int *count);

int					ft_atoi_minus(const char *str);
char				*ft_strndup(const char *src, size_t n);
char				*ft_itoa_uns(unsigned int n);
char				*ft_itoa_uintptr(uintptr_t n);
unsigned int		ft_atoi_base(char *str, char *base);
uintptr_t			ft_atoi_base_uintptr(char *str, char *base);
char				*ft_convert_base(char *nbr, char *base_from, char *base_to);
char				*ft_convert_base_uintptr(char *nbr, char *base_from, \
													char *base_to);

/*
** ========================== FUNCTIONS PRINTF =================================
*/
typedef	struct		s_printf
{
	va_list			ap;
	int				c;
	char			*str;
	int				p;
	int				nbr;
	unsigned int	u;
	char			*stock_flags;
	int				flag_star[2];
	int				nb_param;
	int				*n;
	float			f;
	char			*e;
}					t_printf;

/*
** CHECK_ELEM.C ================================================================
*/
int					check_c(char *str, char c);
int					check_n_c(char *str, char c, int n);
int					check_nb(char *str);
int					check_n_nb(char *str, int n);

/*
** FIND_ELEM.C ================================================================
*/
int					find_c(char *str, char c, int val);
int					find_c_invert(char *str, char c, int val);

/*
** COUNT_ELEMS.C ===============================================================
*/
int					count_elem(char *str, char c);
int					count_zeros(char *str);

/*
** INIT_FREE_VAR.C =============================================================
*/
void				init_var(t_printf *var);
void				free_var(t_printf *var);

/*
** INIT_FLAGS.C ================================================================
*/
int					check_flags(const char *str, t_printf *var);
void				assign_param(t_printf *var);
void				assign_param_dot(t_printf *var);

/*
** CASE_FLAGS.C ================================================================
*/
void				flag_no_dot(t_printf *var, int *count);
void				flag_dot_nbr(t_printf *var, int *count);
void				flag_dot_str(t_printf *var, int *count);

/*
** PRINT_TYPES.C ===============================================================
*/
void				print_zeros(int *count, int len);
void				print_spaces(int *count, int len);
void				print_minus(t_printf *var, int *count, int len);
void				print_no_flag(t_printf *var, int *count);
void				print_flags(t_printf *var, int *count, int val);

/*
** PRINT_FLAGS.C ===============================================================
*/
void				print_params(t_printf *var, int *count, int len_abs);

/*
** CONV_*.C ====================================================================
*/
int					conv_c(t_printf *var);
int					conv_s(t_printf *var);
int					conv_p(t_printf *var);
int					conv_di(t_printf *var);
int					conv_u(t_printf *var);
int					conv_lower_x(t_printf *var);
int					conv_upper_x(t_printf *var);
int					conv_pcent(t_printf *var);

/*
** CONV_BONUS.C ================================================================
*/
int					conv_n(t_printf *var, int *count);
int					conv_f(t_printf *var);
int					conv_g(t_printf *var);
int					conv_e(t_printf *var);

/*
** CONVERSION.C ================================================================
*/
void				conversion_param(char c, t_printf *var);

/*
** CONVERSION_BONUS.C ==========================================================
*/
void				conversion_bonus(char c, t_printf *var, int *count);

/*
** FT_PRINTF.C =================================================================
*/
int					ft_printf(const char *str, ...);

#endif
