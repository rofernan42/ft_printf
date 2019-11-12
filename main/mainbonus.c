/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainbonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 13:55:40 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/12 14:29:02 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int main() 
{ 
  int c;
  int d;
//   printf("geeks for %ngeeks ", &c);
//   printf("%d", c);

  // printf("%v");
  // printf("12345%n567\n", &c);
  // printf("%d\n", c);
  // ft_printf("%v");
  // ft_printf("%d\n", d);
  // printf("   printf: salut : %c %c %c%c%v%c %s %d %i%d%v\n", 'a', 'T', 'p', 'Z', '1', "hahaha", 4567, 9874, 2);
  // printf("%d %d\n", c, d);
	ft_printf("ft_printf: salut : %c %c %c%c%v%c %s %d %i%d%v\n", 'a', 'T', 'p', 'Z', '1', "hahaha", 4567, 9874, 2);
  //  ft_printf("%d %d\n", c, d);
  return 0; 
}
