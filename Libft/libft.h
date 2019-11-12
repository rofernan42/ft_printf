/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:25:58 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/12 11:51:36 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdint.h>

size_t			ft_strlen(const char *str);
int				ft_atoi(const char *str);
char			*ft_strdup(const char *src);
char			*ft_itoa(int n);
void			ft_putchar_fd(char c, int fd, int *count);
void			ft_putstr_fd(char *s, int fd, int *count);

char			*ft_strjoin_free(char const *s1, char const *s2, int par);
int				ft_atoi_minus(const char *str);
char			*ft_strndup(const char *src, size_t n);
char			*ft_itoa_uns(unsigned int n);
char			*ft_itoa_uintptr(uintptr_t n);
unsigned int	ft_atoi_base(char *str, char *base);
uintptr_t		ft_atoi_base_uintptr(char *str, char *base);
char			*ft_convert_base(char *nbr, char *base_from, char *base_to);
char			*ft_convert_base_uintptr(char *nbr, char *base_from, \
													char *base_to);

#endif
