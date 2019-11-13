/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainbonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 13:55:40 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/13 14:22:51 by rofernan         ###   ########.fr       */
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
	// printf("%c\n", 0);
	// ft_printf("%c\n", 0);
	// printf("   printf: |%.0p| |%.p|\n", 0, 0);
	// ft_printf("ft_printf: |%.0p| |%.p|\n", 0, 0);
	// printf("|%.5p|\n", 0);
	// ft_printf("|%.5p|\n", 0);
	// printf("|%.20p|\n", c);
	// ft_printf("|%.20p|\n", c);

	// printf("valeur de retour = %d\n", ft_printf("ft_printf = \"%15p\"\n", str));
	// printf("valeur de retour = %d\n\n", printf("   printf = \"%15p\"\n", str));

	// printf("valeur de retour = %d\n", ft_printf("ft_printf = \"%-15p\"\n", str));
	// printf("valeur de retour = %d\n\n", printf("   printf = \"%-15p\"\n\n", str));

	// printf("   printf = \"%0.*p\"\n", 0,0);
	// ft_printf("ft_printf = \"%0.*p\"\n", 0,0);
	// printf("   printf = \"%0.*p\"\n", 15,0);
	// ft_printf("ft_printf = \"%0.*p\"\n", 15,0);
	// printf("   printf = \"%0.*p\"\n", -15,0);
	// ft_printf("ft_printf = \"%0.*p\"\n", -15,0);
	// printf("   printf = \"%20.*p\"\n", 0,0);
	// ft_printf("ft_printf = \"%20.*p\"\n", 0,0);
	// printf("   printf = \"%-20.*p\"\n", 0,0);
	// ft_printf("ft_printf = \"%-20.*p\"\n", 0,0);

	// printf("   printf = \"%1.*p\"\n", 15,0);
	// ft_printf("ft_printf = \"%1.*p\"\n", 15,0);
	// printf("   printf = \"%10.*p\"\n", 15,0);
	// ft_printf("ft_printf = \"%10.*p\"\n", 15,0);
	// printf("   printf = \"%20.*p\"\n", 15,0);
	// ft_printf("ft_printf = \"%20.*p\"\n\n", 15,0);

	// printf("   printf = \"%-1.*p\"\n", 15,0);
	// ft_printf("ft_printf = \"%-1.*p\"\n", 15,0);
	// printf("   printf = \"%-10.*p\"\n", 15,0);
	// ft_printf("ft_printf = \"%-10.*p\"\n", 15,0);
	// printf("   printf = \"%-20.*p\"\n", 15,0);
	// ft_printf("ft_printf = \"%-20.*p\"\n\n", 15,0);

	// printf("   printf = \"%1.*p\"\n", -15,0);
	// ft_printf("ft_printf = \"%1.*p\"\n", -15,0);
	// printf("   printf = \"%10.*p\"\n", -15,0);
	// ft_printf("ft_printf = \"%10.*p\"\n", -15,0);
	// printf("   printf = \"%20.*p\"\n", -15,0);
	// ft_printf("ft_printf = \"%20.*p\"\n\n", -15,0);

	// printf("   printf = \"%-1.*p\"\n", -15,0);
	// ft_printf("ft_printf = \"%-1.*p\"\n", -15,0);
	// printf("   printf = \"%-10.*p\"\n", -15,0);
	// ft_printf("ft_printf = \"%-10.*p\"\n", -15,0);
	// printf("   printf = \"%-20.*p\"\n", -15,0);
	// ft_printf("ft_printf = \"%-20.*p\"\n\n", -15,0);

	// printf("   printf: |%.u| |%.0u|\n", 0, 0);
	// ft_printf("ft_printf: |%.u| |%.0u|\n", 0, 0);
	// printf("   printf: |%.d| |%.0d|\n", 0, 0);
	// ft_printf("ft_printf: |%.d| |%.0d|\n", 0, 0);

	// printf("%.4u\n", 42);
	// ft_printf("%.4u\n", 42);

	int res;

	res = printf("|%c|\n", 0);
	printf("%d\n", res);
	res = ft_printf("|%c|\n", 0);
	printf("%d\n", res);

	res = printf("   printf: |%c| |%c| |%c| |%c| |%c| |%c| |%c| |%c| |%c| |%c|\n", 0,1,2,3,4,5,6,7,8,9);
	printf("%d\n", res);
	res = ft_printf("ft_printf: |%c| |%c| |%c| |%c| |%c| |%c| |%c| |%c| |%c| |%c|\n", 0,1,2,3,4,5,6,7,8,9);
	printf("%d\n", res);

	res = printf("|%3c|\n", 0);
	printf("%d\n", res);
	res = ft_printf("|%3c|\n", 0);
	printf("%d\n", res);

	res = printf("|%3c|\n", 1);
	printf("%d\n", res);
	res = ft_printf("|%3c|\n", 1);
	printf("%d\n", res);

	res = printf("   printf: |%3c| |%3c| |%3c| |%3c| |%3c| |%3c| |%3c| |%3c| |%3c| |%3c|\n", 0,1,2,3,4,5,6,7,8,9);
	printf("%d\n", res);
	res = ft_printf("ft_printf: |%3c| |%3c| |%3c| |%3c| |%3c| |%3c| |%3c| |%3c| |%3c| |%3c|\n", 0,1,2,3,4,5,6,7,8,9);
	printf("%d\n", res);

	res = printf("   printf: |%.c| |%.c| |%.c| |%.c| |%.c| |%.c| |%.c| |%.c| |%.c| |%.c|\n", 0,1,2,3,4,5,6,7,8,9);
	printf("%d\n", res);
	res = ft_printf("ft_printf: |%.c| |%.c| |%.c| |%.c| |%.c| |%.c| |%.c| |%.c| |%.c| |%.c|\n", 0,1,2,3,4,5,6,7,8,9);
	printf("%d\n", res);

	res = printf("   printf: |%3.4c| |%3.4c| |%3.4c| |%3.4c| |%3.4c| |%3.4c| |%3.4c| |%3.4c| |%3.4c| |%3.4c|\n", 0,1,2,3,4,5,6,7,8,9);
	printf("%d\n", res);
	res = ft_printf("ft_printf: |%3.4c| |%3.4c| |%3.4c| |%3.4c| |%3.4c| |%3.4c| |%3.4c| |%3.4c| |%3.4c| |%3.4c|\n", 0,1,2,3,4,5,6,7,8,9);
	printf("%d\n", res);
	res = printf("   printf: |%-3.4c| |%-3.4c| |%-3.4c| |%-3.4c| |%-3.4c| |%-3.4c| |%-3.4c| |%-3.4c| |%-3.4c| |%-3.4c|\n", 0,1,2,3,4,5,6,7,8,9);
	printf("%d\n", res);
	res = ft_printf("ft_printf: |%-3.4c| |%-3.4c| |%-3.4c| |%-3.4c| |%-3.4c| |%-3.4c| |%-3.4c| |%-3.4c| |%-3.4c| |%-3.4c|\n", 0,1,2,3,4,5,6,7,8,9);
	printf("%d\n", res);
//=======================================================================================================
	// printf("   printf: {%*10*d}, {%10*10d}, {%-*10*d}, {%-10*10d}\n", 5,0, 5,0, 5,0, 5,0);
	// ft_printf("ft_printf: {%*10*d}, {%10*10d}, {%-*10*d}, {%-10*10d}\n", 5,0, 5,0, 5,0, 5,0);
	// printf("   printf: {%*3d}, {%3*d}, {%-*3d}, {%-3*d}\n", -5,0, -5,0, -5,0, -5,0);
	// ft_printf("ft_printf: {%*3d}, {%3*d}, {%-*3d}, {%-3*d}\n\n", -5,0, -5,0, -5,0, -5,0);

	// printf("   printf: {%3d}, {%-3d}, {%*d}, {%-*d}\n", 0, 0, 3,0, -3,0);
	// ft_printf("ft_printf: {%3d}, {%-3d}, {%*d}, {%-*d}\n\n", 0, 0, 3,0, -3,0);
	// printf("   printf: {%*3d}, {%3*d}, {%-*3d}, {%-3*d}\n", -5,0, -5,0, -5,0, -5,0);
	// ft_printf("ft_printf: {%*3d}, {%3*d}, {%-*3d}, {%-3*d}\n\n", -5,0, -5,0, -5,0, -5,0);
//=======================================================================================================
	// printf("   printf: {%*5s} {%5*s} {%-*5s} {%-5*s}\n", 10,"ha", 10,"ha", 10,"ha", 10,"ha");
	// ft_printf("ft_printf: {%*5s} {%5*s} {%-*5s} {%-5*s}\n", 10,"ha", 10,"ha", 10,"ha", 10,"ha");
	// printf("   printf: {%*5s} {%5*s} {%-*5s} {%-5*s}\n", -10,"ha", -10,"ha", -10,"ha", -10,"ha");
	// ft_printf("ft_printf: {%*5s} {%5*s} {%-*5s} {%-5*s}\n\n", -10,"ha", -10,"ha", -10,"ha", -10,"ha");

	// printf("   printf: {%5s} {%-5s} {%*s} {%-*s}\n", "ha", "ha", 10,"ha", 10,"ha");
	// ft_printf("ft_printf: {%5s} {%-5s} {%*s} {%-*s}\n\n", "ha", "ha", 10,"ha", 10,"ha");
	// printf("   printf: {%5s} {%-5s} {%*s} {%-*s}\n", 10,"ha", 10,"ha", 10,"ha", 10,"ha");
	// ft_printf("ft_printf: {%5s} {%-5s} {%*s} {%-*s}\n", 10,"ha", 10,"ha", 10,"ha", 10,"ha");
//==========================================================================================================
	// printf("   printf: {%*3c}, {%3*c}, {%-*3c}, {%-3*c}\n", 10,'c', 10,'c', 10,'c', 10,'c');
	// ft_printf("ft_printf: {%*3c}, {%3*c}, {%-*3c}, {%-3*c}\n", 10,'c', 10,'c', 10,'c', 10,'c');
	// printf("   printf: {%*3c}, {%3*c}, {%-*3c}, {%-3*c}\n", -10,'c', -10,'c', -10,'c', -10,'c');
	// ft_printf("ft_printf: {%*3c}, {%3*c}, {%-*3c}, {%-3*c}\n", -10,'c', -10,'c', -10,'c', -10,'c');
	// printf("   printf: salut : %c %c %c%c %c %c %s %d %i%d%n\n", 'a', 'T', 'p', 'Z', "haha", '1', "hahaha", 4567, 9874, 2, &d);
	// printf("%d %d\n", c, d);
	// ft_printf("ft_printf: salut : %c %c %c%c %n %s %s %d %i%d%n\n", 'a', 'T', 'p', 'Z', "haha", '1', "hahaha", 4567, 9874, 2, "haha");
	// ft_printf("%d %d\n", c, d);

	// printf("4  printf: |%15.-10d| |%10.-15d| |%15.-3d|\n", 1234, 1234, 1234, 1234);    //UNDEFINED BEHAVIOUR
	// ft_printf("ft_printf: |%15.-10d| |%10.-15d| |%15.-3d|\n\n", 1234, 1234, 1234, 1234);
	// printf("5  printf: |%-15.-10d| |%-10.-15d| |%-0.-0d| |%-15.-3d|\n", 1234, 1234, 1234, 1234); //UNDEFINED BEHAVIOUR
	// ft_printf("ft_printf: |%-15.-10d| |%-10.-15d| |%-0.-0d| |%-15.-3d|\n\n", 1234, 1234, 1234, 1234);

	// printf("4  printf: |%15.*d| |%10.*d| |%15.*d|\n", -10,1234, -15,1234, -3,1234);    //UNDEFINED BEHAVIOUR
	// ft_printf("ft_printf: |%15.*d| |%10.*d| |%15.*d|\n", -10,1234, -15,1234, -3,1234);
	// printf("5  printf: |%-15.*d| |%-10.*d| |%-15.*d|\n", -10,1234, -15,1234, -3,1234); //UNDEFINED BEHAVIOUR
	// ft_printf("ft_printf: |%-15.*d| |%-10.*d| |%-15.*d|\n", -10,1234, -15,1234, -3,1234);

	return 0; 
}
