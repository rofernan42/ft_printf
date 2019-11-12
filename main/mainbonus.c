/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainbonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 13:55:40 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/12 19:14:47 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int main() 
{ 
	int c;
	char *str;
	// int d;
//   printf("geeks for %ngeeks ", &c);
//   printf("%d", c);

	// printf("%v");
	// printf("12345%n567\n", &c);
	// printf("%d\n", c);
	// ft_printf("%v");
	// ft_printf("%d\n", d);
	printf("%c\n", 0);
	ft_printf("%c\n", 0);
	printf("   printf: |%.0p| |%.p|\n", 0, 0);
	ft_printf("ft_printf: |%.0p| |%.p|\n", 0, 0);
	printf("|%.5p|\n", 0);
	ft_printf("|%.5p|\n", 0);
	printf("|%.20p|\n", c);
	ft_printf("|%.20p|\n", c);

	printf("valeur de retour = %d\n", ft_printf("ft_printf = \"%15p\"\n", str));
	printf("valeur de retour = %d\n\n", printf("   printf = \"%15p\"\n", str));

	printf("valeur de retour = %d\n", ft_printf("ft_printf = \"%-15p\"\n", str));
	printf("valeur de retour = %d\n\n", printf("   printf = \"%-15p\"\n\n", str));

	printf("   printf = \"%0.*p\"\n", 0,0);
	ft_printf("ft_printf = \"%0.*p\"\n", 0,0);
	printf("   printf = \"%0.*p\"\n", 15,0);
	ft_printf("ft_printf = \"%0.*p\"\n", 15,0);
	printf("   printf = \"%0.*p\"\n", -15,0);
	ft_printf("ft_printf = \"%0.*p\"\n", -15,0);
	printf("   printf = \"%20.*p\"\n", 0,0);
	ft_printf("ft_printf = \"%20.*p\"\n", 0,0);
	printf("   printf = \"%-20.*p\"\n", 0,0);
	ft_printf("ft_printf = \"%-20.*p\"\n", 0,0);

	printf("   printf = \"%1.*p\"\n", 15,0);
	ft_printf("ft_printf = \"%1.*p\"\n", 15,0);
	printf("   printf = \"%10.*p\"\n", 15,0);
	ft_printf("ft_printf = \"%10.*p\"\n", 15,0);
	printf("   printf = \"%20.*p\"\n", 15,0);
	ft_printf("ft_printf = \"%20.*p\"\n\n", 15,0);

	printf("   printf = \"%-1.*p\"\n", 15,0);
	ft_printf("ft_printf = \"%-1.*p\"\n", 15,0);
	printf("   printf = \"%-10.*p\"\n", 15,0);
	ft_printf("ft_printf = \"%-10.*p\"\n", 15,0);
	printf("   printf = \"%-20.*p\"\n", 15,0);
	ft_printf("ft_printf = \"%-20.*p\"\n\n", 15,0);

	printf("   printf = \"%1.*p\"\n", -15,0);
	ft_printf("ft_printf = \"%1.*p\"\n", -15,0);
	printf("   printf = \"%10.*p\"\n", -15,0);
	ft_printf("ft_printf = \"%10.*p\"\n", -15,0);
	printf("   printf = \"%20.*p\"\n", -15,0);
	ft_printf("ft_printf = \"%20.*p\"\n\n", -15,0);

	printf("   printf = \"%-1.*p\"\n", -15,0);
	ft_printf("ft_printf = \"%-1.*p\"\n", -15,0);
	printf("   printf = \"%-10.*p\"\n", -15,0);
	ft_printf("ft_printf = \"%-10.*p\"\n", -15,0);
	printf("   printf = \"%-20.*p\"\n", -15,0);
	ft_printf("ft_printf = \"%-20.*p\"\n\n", -15,0);

	printf("   printf: |%.u| |%.0u|\n", 0, 0);
	ft_printf("ft_printf: |%.u| |%.0u|\n", 0, 0);
	printf("   printf: |%.d| |%.0d|\n", 0, 0);
	ft_printf("ft_printf: |%.d| |%.0d|\n", 0, 0);

	printf("%.4u\n", 42);
	ft_printf("%.4u\n", 42);

	printf("{%3c}\n", 0);
	ft_printf("{%3c}\n", 0);

	// printf("   printf: salut : %c %c %c%c %c %c %s %d %i%d%n\n", 'a', 'T', 'p', 'Z', "haha", '1', "hahaha", 4567, 9874, 2, &d);
	// printf("%d %d\n", c, d);
	// ft_printf("ft_printf: salut : %c %c %c%c %n %s %s %d %i%d%n\n", 'a', 'T', 'p', 'Z', "haha", '1', "hahaha", 4567, 9874, 2, "haha");
	// ft_printf("%d %d\n", c, d);
	return 0; 
}
