/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:31:00 by rofernan          #+#    #+#             */
/*   Updated: 2019/11/13 15:22:20 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

// /*
int main()
{
	unsigned int i = 2147483650;
	printf("salut % \n");
	ft_printf("salut % \n");
	printf("   printf: salut : %c %c %c%c%c %s %d %i%d\n", 'a', 'T', 'p', 'Z', '1', "hahaha", 4567, 9874, 2);
	ft_printf("ft_printf: salut : %c %c %c%c%c %s %d %i%d\n\n", 'a', 'T', 'p', 'Z', '1', "hahaha", 4567, 9874, 2);
	printf("%d %d %d %d %d\n", 2147483647, 2147483648, 0, -2147483647, -2147483650);
	ft_printf("%d %d %d %d %d\n\n", 2147483647, 2147483648, 0, -2147483647, -2147483650);
	printf("   printf: %p %p %p\n", "a", "21474", "coco");
	ft_printf("ft_printf: %p %p %p\n\n", "a", "21474", "coco");
	printf("   printf: %s %d %u %u\n", "unsigned int", -1234, -1234, i);
	ft_printf("ft_printf: %s %d %u %u\n\n", "unsigned int", -1234, -1234, i);
	printf("   printf: %d %d %d %d %d %d %d\n", 1234, -1234, 0, 2147483647, -2147483648, 2147483648, 9999999999);
	ft_printf("ft_printf: %d %d %d %d %d %d %d\n\n", 1234, -1234, 0, 2147483647, -2147483648, 2147483648, 9999999999);
	printf("%x %x %u\n", 456, i, -2147483648);
	ft_printf("%x %x %u\n", 456, i, -2147483648);
	printf("%X %X %u\n", 456, i, -2147483648);
	ft_printf("%X %X %u\n", 456, i, -2147483648);
	printf("   printf: %%%%%%%%%%%%\n");
	ft_printf("ft_printf: %%%%%%%%%%%%\n\n");

	// printf("%d %d %d\n", 456, i);//, 2147483647L);
	// ft_printf("%d %d %d\n", 456, i);//, 2147483647);




	// ===== SPACE BEFORE PARAM =====

	// printf("space before param\n");
	// printf("   printf: % d\n", 1234);
	// ft_printf("ft_printf: % d\n\n", -1234);
	// printf("   printf: %  d\n", 1234);
	// ft_printf("ft_printf: %  d\n\n", -1234);

	// printf("   printf: % s\n", "romain");
	// ft_printf("ft_printf: % s\n\n", "romain");
	// printf("   printf: %  s\n", "romain");
	// ft_printf("ft_printf: %  s\n\n\n", "romain");




	// ===== NUMBER BEFORE PARAM =====
	// POSITIF
	printf("number before param\n"); //ok
	printf("1  printf: |%0010d| |%015u| |%10s|\n", -1234, 2147483700, "romain");
	ft_printf("ft_printf: |%0010d| |%015u| |%10s|\n", -1234, 2147483700, "romain");
	printf("2  printf: |%10d| |%15u| |%15s|\n", -1234, 2147483700, "fernandez");
	ft_printf("ft_printf: |%10d| |%15u| |%15s|\n\n", -1234, 2147483700, "fernandez");

	// NEGATIF
	printf("- & number before param\n");
	printf("   printf: |%-006d| |%-015u| |%-10s|\n", -1234, 2147483700, "romain");
	ft_printf("ft_printf: |%-006d| |%-015u| |%-10s|\n", -1234, 2147483700, "romain");
	printf("   printf: |%-6d| |%-15u| |%-10s|\n", -1234, 2147483700, "romain");
	ft_printf("ft_printf: |%-6d| |%-15u| |%-10s|\n", -1234, 2147483700, "romain");


printf(" ===== 1 NOMBRE ===== \n\n");
// 	// POSITIF
	printf("+ nbr param\n");
	printf("1  printf: |%10d| |%5d| |%8s| |%3s|\n", 1234, 5678, "romain", "romain");
	ft_printf("ft_printf: |%10d| |%5d| |%8s| |%3s|\n", 1234, 5678, "romain", "romain");
	printf("2  printf: |%10d| |%5d| |%8s| |%3s|\n", -1234, -5678, "romain", "romain");
	ft_printf("ft_printf: |%10d| |%5d| |%8s| |%3s|\n", -1234, -5678, "romain", "romain");

	printf("+ 0nbr param\n");
	printf("1  printf: |%010d| |%0005d| |%08s| |%003s|\n", 1234, 5678, "romain", "romain");
	ft_printf("ft_printf: |%010d| |%0005d| |%08s| |%003s|\n", 1234, 5678, "romain", "romain");
	printf("2  printf: |%010d| |%0005d| |%08s| |%003s|\n", -1234, -5678, "romain", "romain");
	ft_printf("ft_printf: |%010d| |%0005d| |%08s| |%003s|\n", -1234, -5678, "romain", "romain");

	printf("- nbr param\n");
	printf("1  printf: |%-10d| |%---5d| |%--8s| |%-3s|\n", 1234, 5678, "romain", "romain");
	ft_printf("ft_printf: |%-10d| |%---5d| |%--8s| |%-3s|\n", 1234, 5678, "romain", "romain");
	printf("2  printf: |%-10d| |%---5d| |%--8s| |%-3s|\n", -1234, -5678, "romain", "romain");
	ft_printf("ft_printf: |%-10d| |%---5d| |%--8s| |%-3s|\n", -1234, -5678, "romain", "romain");

	printf("- 0nbr param\n");
	printf("1  printf: |%-0010d| |%---05d| |%--0008s| |%-03s|\n", 1234, 5678, "romain", "romain");
	ft_printf("ft_printf: |%-0010d| |%---05d| |%--0008s| |%-03s|\n", 1234, 5678, "romain", "romain");
	printf("2  printf: |%-0010d| |%---05d| |%--0008s| |%-03s|\n", -1234, -5678, "romain", "romain");
	ft_printf("ft_printf: |%-0010d| |%---05d| |%--0008s| |%-03s|\n\n", -1234, -5678, "romain", "romain");

printf(" ===== 1 ETOILE ===== \n\n");
	// POSITIF
	printf("+ * + param\n");
	printf("1  printf: |%*d| |%*d| |%*s| |%*s|\n", 10,1234, 5,5678, 8,"romain", 3,"romain");
	ft_printf("ft_printf: |%*d| |%*d| |%*s| |%*s|\n", 10,1234, 5,5678, 8,"romain", 3,"romain");
	printf("2  printf: |%*d| |%*d| |%*s| |%*s|\n", 10,-1234, 5,-5678, 8,"romain", 3,"romain");
	ft_printf("ft_printf: |%*d| |%*d| |%*s| |%*s|\n", 10,-1234, 5,-5678, 8,"romain", 3,"romain");

	printf("+ 0* + param\n");
	printf("1  printf: |%00*d| |%0*d| |%000*s| |%0*s|\n", 15,1234, 5,5678, 8,"romain", 3,"romain");
	ft_printf("ft_printf: |%00*d| |%0*d| |%000*s| |%0*s|\n", 15,1234, 5,5678, 8,"romain", 3,"romain");
	printf("2  printf: |%00*d| |%0*d| |%000*s| |%0*s|\n", 15,-1234, 5,-5678, 8,"romain", 3,"romain");
	ft_printf("ft_printf: |%00*d| |%0*d| |%000*s| |%0*s|\n", 15,-1234, 5,-5678, 8,"romain", 3,"romain");

	printf("+ * - param\n");
	printf("1  printf: |%*d| |%*d| |%*s| |%*s|\n", -15,1234, -5,5678, -8,"romain", -3,"romain");
	ft_printf("ft_printf: |%*d| |%*d| |%*s| |%*s|\n", -15,1234, -5,5678, -8,"romain", -3,"romain");
	printf("2  printf: |%*d| |%*d| |%*s| |%*s|\n", -15,-1234, -5,-5678, -8,"romain", -3,"romain");
	ft_printf("ft_printf: |%*d| |%*d| |%*s| |%*s|\n", -15,-1234, -5,-5678, -8,"romain", -3,"romain");

	printf("+ 0* - param\n");
	printf("1  printf: |%00*d| |%0*d| |%000*s| |%0*s|\n", -15,1234, -5,5678, -8,"romain", -3,"romain");
	ft_printf("ft_printf: |%00*d| |%0*d| |%000*s| |%0*s|\n", -15,1234, -5,5678, -8,"romain", -3,"romain");
	printf("2  printf: |%00*d| |%0*d| |%000*s| |%0*s|\n", -15,-1234, -5,-5678, -8,"romain", -3,"romain");
	ft_printf("ft_printf: |%00*d| |%0*d| |%000*s| |%0*s|\n\n", -15,-1234, -5,-5678, -8,"romain", -3,"romain");

	// NEGATIF
	printf("- * + param\n");
	printf("1  printf: |%---*d| |%--*d| |%-*s| |%----*s|\n", 10,1234, 5,5678, 8,"romain", 3,"romain");
	ft_printf("ft_printf: |%---*d| |%--*d| |%-*s| |%----*s|\n", 10,1234, 5,5678, 8,"romain", 3,"romain");
	printf("2  printf: |%-*d| |%-*d| |%-*s| |%-*s|\n", 10,-1234, 5,-5678, 8,"romain", 3,"romain");
	ft_printf("ft_printf: |%-*d| |%-*d| |%-*s| |%-*s|\n", 10,-1234, 5,-5678, 8,"romain", 3,"romain");

	printf("- 0* + param\n");
	printf("1  printf: |%-00*d| |%-0*d| |%-000*s| |%-0*s|\n", 15,1234, 5,5678, 8,"romain", 3,"romain");
	ft_printf("ft_printf: |%-00*d| |%-0*d| |%-000*s| |%-0*s|\n", 15,1234, 5,5678, 8,"romain", 3,"romain");
	printf("2  printf: |%-00*d| |%-0*d| |%-000*s| |%-0*s|\n", 15,-1234, 5,-5678, 8,"romain", 3,"romain");
	ft_printf("ft_printf: |%-00*d| |%-0*d| |%-000*s| |%-0*s|\n", 15,-1234, 5,-5678, 8,"romain", 3,"romain");

	printf("- * - param\n");
	printf("1  printf: |%-*d| |%-*d| |%-*s| |%-*s|\n", -15,1234, -5,5678, -8,"romain", -3,"romain");
	ft_printf("ft_printf: |%-*d| |%-*d| |%-*s| |%-*s|\n", -15,1234, -5,5678, -8,"romain", -3,"romain");
	printf("2  printf: |%-*d| |%-*d| |%-*s| |%-*s|\n", -15,-1234, -5,-5678, -8,"romain", -3,"romain");
	ft_printf("ft_printf: |%-*d| |%-*d| |%-*s| |%-*s|\n", -15,-1234, -5,-5678, -8,"romain", -3,"romain");

	printf("+ 0* - param\n");
	printf("1  printf: |%-00*d| |%-0*d| |%-000*s| |%-0*s|\n", -15,1234, -5,5678, -8,"romain", -3,"romain");
	ft_printf("ft_printf: |%-00*d| |%-0*d| |%-000*s| |%-0*s|\n", -15,1234, -5,5678, -8,"romain", -3,"romain");
	printf("2  printf: |%-00*d| |%-0*d| |%-000*s| |%-0*s|\n", -15,-1234, -5,-5678, -8,"romain", -3,"romain");
	ft_printf("ft_printf: |%-00*d| |%-0*d| |%-000*s| |%-0*s|\n\n", -15,-1234, -5,-5678, -8,"romain", -3,"romain");

printf(" ===== ETOILES + POINT ===== \n\n");
	// POSITIF
	printf("+ *.\n");
	printf("1  printf: |%*.x| |%*.x| |%*.x| |%*.x|\n", 15,1234, 15,-1234, 5,1234, 5,-1234);			//
	ft_printf("ft_printf: |%*.x| |%*.x| |%*.x| |%*.x|\n", 15,1234, 15,-1234, 5,1234, 5,-1234);		//
	printf("2  printf: |%*.x| |%*.x| |%*.x| |%*.x|\n", -15,1234, -15,-1234, -5,1234, -5,-1234);		//
	ft_printf("ft_printf: |%*.x| |%*.x| |%*.x| |%*.x|\n\n", -15,1234, -15,-1234, -5,1234, -5,-1234);//
																									// MEME RESULTATS
	printf("+ 0*.\n");																				//
	printf("3  printf: |%0*.d| |%0*.d| |%0*.d| |%0*.d|\n", 15,1234, 15,-1234, 5,1234, 5,-1234);		//
	ft_printf("ft_printf: |%0*.d| |%0*.d| |%0*.d| |%0*.d|\n", 15,1234, 15,-1234, 5,1234, 5,-1234);	//
	printf("4  printf: |%0*.d| |%0*.d| |%0*.d| |%0*.d|\n", -15,1234, -15,-1234, -5,1234, -5,-1234);		//
	ft_printf("ft_printf: |%0*.d| |%0*.d| |%0*.d| |%0*.d|\n\n\n", -15,1234, -15,-1234, -5,1234, -5,-1234);//

	printf("+ .*\n");
	printf("1  printf: |%.*s| |%.*s| |%.*s|\n", 15,"romain", 4,"romain", 7,"romain");			//
	ft_printf("ft_printf: |%.*s| |%.*s| |%.*s|\n", 15,"romain", 4,"romain", 7,"romain");		//
	printf("2  printf: |%.*s| |%.*s| |%.*s|\n", -15,"romain", -4,"romain", -7,"romain");		//
	ft_printf("ft_printf: |%.*s| |%.*s| |%.*s|\n\n", -15,"romain", -4,"romain", -7,"romain");//
	
	printf("+ *.\n");
	printf("1  printf: |%*.s| |%*.s| |%*.s|\n", 15,"romain", 4,"romain", 7,"romain");			//
	ft_printf("ft_printf: |%*.s| |%*.s| |%*.s|\n", 15,"romain", 4,"romain", 7,"romain");		//
	printf("2  printf: |%*.s| |%*.s| |%*.s|\n", -15,"romain", -4,"romain", -7,"romain");		//
	ft_printf("ft_printf: |%*.s| |%*.s| |%*.s|\n\n", -15,"romain", -4,"romain", -7,"romain");//

	printf("+ .*\n");
	printf("1  printf: |%.*d| |%.*d| |%.*d| |%.*d|\n", 15,1234, 15,-1234, 5,1234, 5,-1234);
	ft_printf("ft_printf: |%.*d| |%.*d| |%.*d| |%.*d|\n", 15,1234, 15,-1234, 5,1234, 5,-1234);
	printf("2  printf: |%.*d| |%.*d| |%.*d| |%.*d|\n", -15,1234, -15,-1234, -5,1234, -5,-1234);
	ft_printf("ft_printf: |%.*d| |%.*d| |%.*d| |%.*d|\n\n\n", -15,1234, -15,-1234, -5,1234, -5,-1234);

	// printf("+ .0*\n");								//
	// printf("3  printf: |%.10*d|\n", 15,1234);		//
	// ft_printf("ft_printf: |%.10*d|\n", 15,1234);		// COMPORTEMENT INDEFINI AVEC 0, MEME RESULTAT QUE 0*.
	// printf("4  printf: |%.10*d|\n", -15,1234);		//
	// ft_printf("ft_printf: |%.10*d|\n\n", -15,1234);	//

	printf("+ *.* pos parameter\n");
	printf("1  printf: |%*.*x| |%*.*x| |%*.*x| |%*.*x|\n", 15,10,1234, 10,15,1234, 0,0,1234, 15,3,1234);			// 5 spaces, 6 0, 1234
	ft_printf("ft_printf: |%*.*x| |%*.*x| |%*.*x| |%*.*x|\n", 15,10,1234, 10,15,1234, 0,0,1234, 15,3,1234);  		//
	printf("2  printf: |%*.*x| |%*.*x| |%*.*x| |%*.*x|\n", -15,10,1234, -10,15,1234, -0,0,1234, -15,3,1234);		// 6 0, 1234, 5 spaces
	ft_printf("ft_printf: |%*.*x| |%*.*x| |%*.*x| |%*.*x|\n", -15,10,1234, -10,15,1234, -0,0,1234, -15,3,1234);
	printf("3  printf: |%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", 15,-10,1234, 10,-15,1234, 0,-0,1234, 15,-3,1234);		// 6 + 5 spaces, 1234
	ft_printf("ft_printf: |%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", 15,-10,1234, 10,-15,1234, 0,-0,1234, 15,-3,1234);
	printf("4  printf: |%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", -15,-10,1234, -10,-15,1234, -0,-0,1234, -15,-3,1234);		// 1234, 6 + 5 spaces
	ft_printf("ft_printf: |%*.*d| |%*.*d| |%*.*d| |%*.*d|\n\n", -15,-10,1234, -10,-15,1234, -0,-0,1234, -15,-3,1234);

	printf("- *.* pos parameter\n");
	printf("1  printf: |%-*.*x| |%-*.*x| |%-*.*x| |%-*.*x|\n", 15,10,1234, 10,15,1234, 0,0,1234, 15,3,1234);
	ft_printf("ft_printf: |%-*.*x| |%-*.*x| |%-*.*x| |%-*.*x|\n", 15,10,1234, 10,15,1234, 0,0,1234, 15,3,1234);
	printf("2  printf: |%-*.*x| |%-*.*x| |%-*.*x| |%-*.*x|\n", -15,10,1234, -10,15,1234, -0,0,1234, -15,3,1234);
	ft_printf("ft_printf: |%-*.*x| |%-*.*x| |%-*.*x| |%-*.*x|\n", -15,10,1234, -10,15,1234, -0,0,1234, -15,3,1234);
	printf("3  printf: |%-*.*x| |%-*.*x| |%-*.*x| |%-*.*x|\n", 15,-10,1234, 10,-15,1234, 0,-0,1234, 15,-3,1234);
	ft_printf("ft_printf: |%-*.*x| |%-*.*x| |%-*.*x| |%-*.*x|\n", 15,-10,1234, 10,-15,1234, 0,-0,1234, 15,-3,1234);
	printf("4  printf: |%-*.*x| |%-*.*x| |%-*.*x| |%-*.*x|\n", -15,-10,1234, -10,-15,1234, -0,-0,1234, -15,-3,1234);
	ft_printf("ft_printf: |%-*.*x| |%-*.*x| |%-*.*x| |%-*.*x|\n\n", -15,-10,1234, -10,-15,1234, -0,-0,1234, -15,-3,1234);

	printf("+ *.* neg parameter\n");
	printf("1  printf: |%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", 15,10,-1234, 10,15,-1234, 0,0,-1234, 15,3,-1234);			// 5 spaces, 6 0, 1234
	ft_printf("ft_printf: |%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", 15,10,-1234, 10,15,-1234, 0,0,-1234, 15,3,-1234);  		// <---je fais flag_star[0] - flag_star[1] c'est pas bon
	printf("2  printf: |%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", -15,10,-1234, -10,15,-1234, -0,0,-1234, -15,3,-1234);		// 6 0, 1234, 5 spaces
	ft_printf("ft_printf: |%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", -15,10,-1234, -10,15,-1234, -0,0,-1234, -15,3,-1234);
	printf("3  printf: |%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", 15,-10,-1234, 10,-15,-1234, 0,-0,-1234, 15,-3,-1234);		// 6 + 5 spaces, 1234
	ft_printf("ft_printf: |%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", 15,-10,-1234, 10,-15,-1234, 0,-0,-1234, 15,-3,-1234);
	printf("4  printf: |%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", -15,-10,-1234, -10,-15,-1234, -0,-0,-1234, -15,-3,-1234);		// 1234, 6 + 5 spaces
	ft_printf("ft_printf: |%*.*d| |%*.*d| |%*.*d| |%*.*d|\n\n\n", -15,-10,-1234, -10,-15,-1234, -0,-0,-1234, -15,-3,-1234);

	printf("- *.* neg parameter\n");
	printf("1  printf: |%-*.*d| |%-*.*d| |%-*.*d| |%-*.*d|\n", 15,10,-1234, 10,15,-1234, 0,0,-1234, 15,3,-1234);			// 5 spaces, 6 0, 1234
	ft_printf("ft_printf: |%-*.*d| |%-*.*d| |%-*.*d| |%-*.*d|\n", 15,10,-1234, 10,15,-1234, 0,0,-1234, 15,3,-1234);  		// <---je fais flag_star[0] - flag_star[1] c'est pas bon
	printf("2  printf: |%-*.*d| |%-*.*d| |%-*.*d| |%-*.*d|\n", -15,10,-1234, -10,15,-1234, -0,0,-1234, -15,3,-1234);		// 6 0, 1234, 5 spaces
	ft_printf("ft_printf: |%-*.*d| |%-*.*d| |%-*.*d| |%-*.*d|\n", -15,10,-1234, -10,15,-1234, -0,0,-1234, -15,3,-1234);
	printf("3  printf: |%-*.*d| |%-*.*d| |%-*.*d| |%-*.*d|\n", 15,-10,-1234, 10,-15,-1234, 0,-0,-1234, 15,-3,-1234);		// 6 + 5 spaces, 1234
	ft_printf("ft_printf: |%-*.*d| |%-*.*d| |%-*.*d| |%-*.*d|\n", 15,-10,-1234, 10,-15,-1234, 0,-0,-1234, 15,-3,-1234);
	printf("4  printf: |%-*.*d| |%-*.*d| |%-*.*d| |%-*.*d|\n", -15,-10,-1234, -10,-15,-1234, -0,-0,-1234, -15,-3,-1234);		// 1234, 6 + 5 spaces
	ft_printf("ft_printf: |%-*.*d| |%-*.*d| |%-*.*d| |%-*.*d|\n\n\n", -15,-10,-1234, -10,-15,-1234, -0,-0,-1234, -15,-3,-1234);

	printf("+ *.* string\n");
	printf("1  printf: |%*.*s| |%*.*s| |%*.*s| |%*.*s|\n", 15,10,"romain", 10,15,"romain", 0,0,"romain", 15,3,"romain"); //en cas de chaine de caractere, argument a gauche
	ft_printf("ft_printf: |%*.*s| |%*.*s| |%*.*s| |%*.*s|\n", 15,10,"romain", 10,15,"romain", 0,0,"romain", 15,3,"romain");// correspond au nombre d'espaces avant et argument
	printf("2  printf: |%*.*s| |%*.*s| |%*.*s| |%*.*s|\n", -15,10,"romain", -10,15,"romain", -0,0,"romain", -15,3,"romain"); // a droite correspond au nombre maximal de caracteres
	ft_printf("ft_printf: |%*.*s| |%*.*s| |%*.*s| |%*.*s|\n", -15,10,"romain", -10,15,"romain", -0,0,"romain", -15,3,"romain"); // a afficher
	printf("3  printf: |%*.*s| |%*.*s| |%*.*s| |%*.*s|\n", 15,-10,"romain", 10,-15,"romain", 0,-0,"romain", 15,-3,"romain");
	ft_printf("ft_printf: |%*.*s| |%*.*s| |%*.*s| |%*.*s|\n", 15,-10,"romain", 10,-15,"romain", 0,-0,"romain", 15,-3,"romain");
	printf("4  printf: |%*.*s| |%*.*s| |%*.*s| |%*.*s|\n", -15,-10,"romain", -10,-15,"romain", -0,-0,"romain", -15,-3,"romain");
	ft_printf("ft_printf: |%*.*s| |%*.*s| |%*.*s| |%*.*s|\n\n", -15,-10,"romain", -10,-15,"romain", -0,-0,"romain", -15,-3,"romain");

	printf("- *.* string\n");
	printf("1  printf: |%-*.*s| |%-*.*s| |%-*.*s| |%-*.*s|\n", 15,10,"romain", 10,15,"romain", 0,0,"romain", 15,3,"romain"); //en cas de chaine de caractere, argument a gauche
	ft_printf("ft_printf: |%-*.*s| |%-*.*s| |%-*.*s| |%-*.*s|\n", 15,10,"romain", 10,15,"romain", 0,0,"romain", 15,3,"romain");// correspond au nombre d'espaces avant et argument
	printf("2  printf: |%-*.*s| |%-*.*s| |%-*.*s| |%-*.*s|\n", -15,10,"romain", -10,15,"romain", -0,0,"romain", -15,3,"romain"); // a droite correspond au nombre maximal de caracteres
	ft_printf("ft_printf: |%-*.*s| |%-*.*s| |%-*.*s| |%-*.*s|\n", -15,10,"romain", -10,15,"romain", -0,0,"romain", -15,3,"romain"); // a afficher
	printf("3  printf: |%-*.*s| |%-*.*s| |%-*.*s| |%-*.*s|\n", 15,-10,"romain", 10,-15,"romain", 0,-0,"romain", 15,-3,"romain");
	ft_printf("ft_printf: |%-*.*s| |%-*.*s| |%-*.*s| |%-*.*s|\n", 15,-10,"romain", 10,-15,"romain", 0,-0,"romain", 15,-3,"romain");
	printf("4  printf: |%-*.*s| |%-*.*s| |%-*.*s| |%-*.*s|\n", -15,-10,"romain", -10,-15,"romain", -0,-0,"romain", -15,-3,"romain");
	ft_printf("ft_printf: |%-*.*s| |%-*.*s| |%-*.*s| |%-*.*s|\n\n", -15,-10,"romain", -10,-15,"romain", -0,-0,"romain", -15,-3,"romain");


	// ===== NOMBRES + POINT =====
	printf("+ nbr.nbr pos parameter %%d\n");
	printf("1  printf: |%15.10d| |%10.15d| |%0.0d| |%15.3d|\n", 1234, 1234, 1234, 1234);
	ft_printf("ft_printf: |%15.10d| |%10.15d| |%0.0d| |%15.3d|\n", 1234, 1234, 1234, 1234);
	printf("+ 0nbr.nbr pos parameter %%d\n");
	printf("2  printf: |%015.10d| |%010.15d| |%0.0d| |%015.3d|\n", 1234, 1234, 1234, 1234);
	ft_printf("ft_printf: |%015.10d| |%010.15d| |%0.0d| |%015.3d|\n\n", 1234, 1234, 1234, 1234);
	printf("3  printf: |%-015.10d| |%-010.15d| |%0.0d| |%-015.3d|\n", 1234, 1234, 1234, 1234);  //CA MARCHE MAIS JE NAI PAS GERE LES '-' ENCORE
	ft_printf("ft_printf: |%-015.10d| |%-010.15d| |%0.0d| |%-015.3d|\n\n\n", 1234, 1234, 1234, 1234);
	// printf("4  printf: |%15.-10d| |%10.-15d| |%0.-0d| |%15.-3d|\n", 1234, 1234, 1234, 1234);    //UNDEFINED BEHAVIOUR
	// ft_printf("ft_printf: |%15.-10d| |%10.-15d| |%0.-0d| |%15.-3d|\n\n\n", 1234, 1234, 1234, 1234);
	// printf("5  printf: |%-15.-10d| |%-10.-15d| |%-0.-0d| |%-15.-3d|\n", 1234, 1234, 1234, 1234); //UNDEFINED BEHAVIOUR
	// ft_printf("ft_printf: |%-15.-10d| |%-10.-15d| |%-0.-0d| |%-15.-3d|\n", 1234, 1234, 1234, 1234);

	// ===== COMBINAISON NOMBREE + POINT + ETOILE =====
	printf("+ nbr.* pos parameter\n");
	printf("1  printf: |%15.*d| |%10.*d| |%15.*d| |%10.*d| |%10.*d|\n", 10,1234, 15,1234, -10,1234, -15,1234, 0,1234);
	ft_printf("ft_printf: |%15.*d| |%10.*d| |%15.*d| |%10.*d| |%10.*d|\n", 10,1234, 15,1234, -10,1234, -15,1234, 0,1234);
	printf("+ *.nbr pos parameter\n");
	printf("2  printf: |%*.15d| |%*.10d| |%*.15d| |%*.10d| |%*.10d|\n", 10,1234, 15,1234, -10,1234, -15,1234, 0,1234);
	ft_printf("ft_printf: |%*.15d| |%*.10d| |%*.15d| |%*.10d| |%*.10d|\n", 10,1234, 15,1234, -10,1234, -15,1234, 0,1234);
	printf("+ 0*.nbr pos parameter\n");
	printf("3  printf: |%0*.15d| |%0*.10d| |%0*.15d| |%0*.10d| |%0*.10d|\n", 10,1234, 15,1234, -10,1234, -15,1234, 0,1234);
	ft_printf("ft_printf: |%0*.15d| |%0*.10d| |%0*.15d| |%0*.10d| |%0*.10d|\n\n", 10,1234, 15,1234, -10,1234, -15,1234, 0,1234);

	// printf("HEXADECIMAL\n");
	printf("1  printf: |%15.*x| |%10.*x| |%15.*x| |%10.*x| |%10.*x|\n", 10,123456, 15,123456, -10,123456, -15,123456, 0,123456);
	ft_printf("ft_printf: |%15.*x| |%10.*x| |%15.*x| |%10.*x| |%10.*x|\n", 10,123456, 15,123456, -10,123456, -15,123456, 0,123456);
	printf("2  printf: |%*.15x| |%*.10x| |%*.15x| |%*.10x| |%*.10x|\n", 10,123456, 15,123456, -10,123456, -15,123456, 0,123456);
	ft_printf("ft_printf: |%*.15x| |%*.10x| |%*.15x| |%*.10x| |%*.10x|\n", 10,123456, 15,123456, -10,123456, -15,123456, 0,123456);
	printf("3  printf: |%0*.15x| |%0*.10x| |%0*.15x| |%0*.10x| |%0*.10x|\n", 10,123456, 15,123456, -10,123456, -15,123456, 0,123456);
	ft_printf("ft_printf: |%0*.15x| |%0*.10x| |%0*.15x| |%0*.10x| |%0*.10x|\n\n", 10,123456, 15,123456, -10,123456, -15,123456, 0,123456);

	printf("+ nbr.* neg parameter\n");
	printf("1  printf: |%15.*d| |%10.*d| |%15.*d| |%10.*d| |%10.*d|\n", 10,-1234, 15,-1234, -10,-1234, -15,-1234, 0,-1234);
	ft_printf("ft_printf: |%15.*d| |%10.*d| |%15.*d| |%10.*d| |%10.*d|\n", 10,-1234, 15,-1234, -10,-1234, -15,-1234, 0,-1234);
	printf("+ *.nbr neg parameter\n");
	printf("2  printf: |%*.15d| |%*.10d| |%*.15d| |%*.10d| |%*.10d|\n", 10,-1234, 15,-1234, -10,-1234, -15,-1234, 0,-1234);
	ft_printf("ft_printf: |%*.15d| |%*.10d| |%*.15d| |%*.10d| |%*.10d|\n", 10,-1234, 15,-1234, -10,-1234, -15,-1234, 0,-1234);
	printf("+ 0*.nbr neg parameter\n");
	printf("3  printf: |%0*.15d| |%0*.10d| |%0*.15d| |%0*.10d| |%0*.10d|\n", 10,-1234, 15,-1234, -10,-1234, -15,-1234, 0,-1234);
	ft_printf("ft_printf: |%0*.15d| |%0*.10d| |%0*.15d| |%0*.10d| |%0*.10d|\n", 10,-1234, 15,-1234, -10,-1234, -15,-1234, 0,-1234);

	printf("HEXADECIMAL\n");
	printf("1  printf: |%15.*x| |%10.*x| |%15.*x| |%10.*x| |%10.*x|\n", 10,-123456, 15,-123456, -10,-123456, -15,-123456, 0,-123456);
	ft_printf("ft_printf: |%15.*x| |%10.*x| |%15.*x| |%10.*x| |%10.*x|\n", 10,-123456, 15,-123456, -10,-123456, -15,-123456, 0,-123456);
	printf("2  printf: |%*.15x| |%*.10x| |%*.15x| |%*.10x| |%*.10x|\n", 10,-123456, 15,-123456, -10,-123456, -15,-123456, 0,-123456);
	ft_printf("ft_printf: |%*.15x| |%*.10x| |%*.15x| |%*.10x| |%*.10x|\n", 10,-123456, 15,-123456, -10,-123456, -15,-123456, 0,-123456);
	printf("3  printf: |%0*.15x| |%0*.10x| |%0*.15x| |%0*.10x| |%0*.10x|\n", 10,-123456, 15,-123456, -10,-123456, -15,-123456, 0,-123456);
	ft_printf("ft_printf: |%0*.15x| |%0*.10x| |%0*.15x| |%0*.10x| |%0*.10x|\n\n", 10,-123456, 15,-123456, -10,-123456, -15,-123456, 0,-123456);

	printf("+ nbr.nbr pos parameter %%x\n");
	printf("1  printf: |%15.10x| |%10.15x| |%0.0x| |%15.3x|\n", 1234, 1234, 1234, 1234);
	ft_printf("ft_printf: |%15.10x| |%10.15x| |%0.0x| |%15.3x|\n", 1234, 1234, 1234, 1234);
	printf("+ nbr.nbr neg parameter %%x\n");
	printf("1  printf: |%15.10x| |%10.15x| |%0.0x| |%15.3x|\n", -1234, -1234, -1234, -1234);			// 5 spaces, 6 0, 1234
	ft_printf("ft_printf: |%15.10x| |%10.15x| |%0.0x| |%15.3x|\n\n\n", -1234, -1234, -1234, -1234);

	printf("test with 0s\n");
	printf("1  printf: |%d| |%.d| |%10.d| |%.10d| |%10.10d| |%.s|\n", 0, 0, 0, 0, 0, "romain");
	ft_printf("ft_printf: |%d| |%.d| |%10.d| |%.10d| |%10.10d| |%.s|\n", 0, 0, 0, 0, 0, "romain");
	printf("1  printf: |%x| |%.x| |%10.x| |%.10x| |%10.10x|\n", 0, 0, 0, 0, 0);
	ft_printf("ft_printf: |%x| |%.x| |%10.x| |%.10x| |%10.10x|\n\n\n", 0, 0, 0, 0, 0);

	// CARACTERES
	printf("+ nbr.nbr char\n");
	printf("1  printf: |%15c| |%10c| |%015c| |%010c| |%-15c|\n", 'a', 'b', 'c', 'd', 'e');
	ft_printf("ft_printf: |%15c| |%10c| |%015c| |%010c| |%-15c|\n", 'a', 'b', 'c', 'd', 'e');
	printf("2  printf: |%*c| |%*c| |%0*c| |%0*c| |%*c|\n", 15,'a', 10,'b', 15,'c', 10,'d', -15,'e');
	ft_printf("ft_printf: |%*c| |%*c| |%0*c| |%0*c| |%*c|\n", 15,'a', 10,'b', 15,'c', 10,'d', -15,'e');
	printf("3  printf: |%15.10c| |%10.15c| |%0.0c| |%15.3c|\n", 'a', 'b', 'c', 'd');		// flag '.' -> comportement indefini
	ft_printf("ft_printf: |%15.10c| |%10.15c| |%0.0c| |%15.3c|\n\n", 'a', 'b', 'c', 'd');		//
	// ==> MEME CHOSE QU'AVEC DES INT APPAREMMENT

	printf("   printf: |%10d| |%-10d| |%--10d| |%---10d| |%----10d|\n", 1234, 1234, 1234, 1234, 1234);
	ft_printf("ft_printf: |%10d| |%-10d| |%--10d| |%---10d| |%----10d|\n", 1234, 1234, 1234, 1234, 1234);
	printf("   printf: |%*.*d| |%-*.*d| |%--*.*d| |%---*.*d| |%----*.*d|\n", 15,10,1234, 15,10,1234, 15,10,1234, 15,10,1234, 15,10,1234);
	ft_printf("ft_printf: |%*.*d| |%-*.*d| |%--*.*d| |%---*.*d| |%----*.*d|\n", 15,10,1234, 15,10,1234, 15,10,1234, 15,10,1234, 15,10,1234);
	printf("   printf: |%*.*d| |%-*.*d| |%--*.*d| |%---*.*d| |%----*.*d|\n", -15,10,1234, -15,10,1234, -15,10,1234, -15,10,1234, -15,10,1234);
	ft_printf("ft_printf: |%*.*d| |%-*.*d| |%--*.*d| |%---*.*d| |%----*.*d|\n", -15,10,1234, -15,10,1234, -15,10,1234, -15,10,1234, -15,10,1234);
	printf("   printf: |%*.*d| |%-*.*d| |%--*.*d| |%---*.*d| |%----*.*d|\n", 15,-10,1234, 15,-10,1234, 15,-10,1234, 15,-10,1234, 15,-10,1234);
	ft_printf("ft_printf: |%*.*d| |%-*.*d| |%--*.*d| |%---*.*d| |%----*.*d|\n", 15,-10,1234, 15,-10,1234, 15,-10,1234, 15,-10,1234, 15,-10,1234);
	printf("   printf: |%*.*d| |%-*.*d| |%--*.*d| |%---*.*d| |%----*.*d|\n", -15,-10,1234, -15,-10,1234, -15,-10,1234, -15,-10,1234, -15,-10,1234);
	ft_printf("ft_printf: |%*.*d| |%-*.*d| |%--*.*d| |%---*.*d| |%----*.*d|\n\n", -15,-10,1234, -15,-10,1234, -15,-10,1234, -15,-10,1234, -15,-10,1234);

	// printf("|%15.10d| |%-15.10d| |%--15.10d| |%---15.10d| |%----15.10d|\n", 1234, 1234, 1234, 1234, 1234);
	// printf("|%15.-10d| |%-15.-10d| |%--15.-10d| |%---15.-10d| |%----15.-10d|\n", 1234, 1234, 1234, 1234, 1234); // UNDEFINED BEHAVIOUR

	printf("1  printf = |%-.d|\n", 0);
	ft_printf("ft_printf = |%-.d|\n\n", 0);

	printf("2  printf = |%05.d|\n", 0);
	ft_printf("ft_printf = |%05.d|\n\n", 0);

	printf("3  printf = |%5.0d|\n", 0);
	ft_printf("ft_printf = |%5.0d|\n\n", 0);

	printf("4  printf = |%-2c|\n", 0);
	ft_printf("ft_printf = |%-2c|\n", 0);
	printf("4  printf = |%-2d|\n", 0);
	ft_printf("ft_printf = |%-2d|\n\n", 0);

	printf("4  printf = |%-2s|\n", "");
	ft_printf("ft_printf = |%-2s|\n\n", "");

	printf("4  printf = |%-2%|\n");
	ft_printf("ft_printf = |%-2%|\n\n");

	printf("5  printf = |%-5c|\n", 0);
	ft_printf("ft_printf = |%-5c|\n", 0);
	printf("5  printf = |%-5d|\n", 0);
	ft_printf("ft_printf = |%-5d|\n\n", 0);

	printf("6  printf = |%*.c| |%*.c|\n", 5,0, -5,0);
	ft_printf("ft_printf = |%*.c| |%*.c|\n", 5,0, -5,0);
	printf("   printf = |%*.d| |%*.d|\n", 5,0, -5,0);
	ft_printf("ft_printf = |%*.d| |%*.d|\n\n", 5,0, -5,0);


	return (0);
}
// */
/*
int		main(void)
{
	char	*str;
	str = "yoyo";

	printf("   printf = \"%-2s\"\n\n", NULL);
	printf("   printf = \"%x\"\n", -42);
	ft_printf("ft_printf = \"%x\"\n\n", -42);
	ft_printf("2:\n");
	ft_printf("ft_printf = \"%.10d\"\n", 4242);
	printf("   printf = \"%.10d\"\n\n", 4242);
	ft_printf("3:\n");
	ft_printf("ft_printf = \"%.10s\"\n", "yoyo");
	printf("   printf = \"%.10s\"\n\n", "yoyo");
	ft_printf("4:\n");
	ft_printf("ft_printf = \"%3.10d\"\n", 4242);
	printf("   printf = \"%3.10d\"\n\n", 4242);
	ft_printf("5:\n");
	ft_printf("ft_printf = \"%3.10s\"\n", "yoyo");
	printf("   printf = \"%.10s\"\n\n", "yoyo");
	ft_printf("6:\n");
	ft_printf("ft_printf = \"%15.10d\"\n", 4242);
	printf("   printf = \"%15.10d\"\n\n", 4242);
	ft_printf("7:\n");
	ft_printf("ft_printf = \"%*.10s\"\n", -15, "yoyo");
	printf("   printf = \"%*.10s\"\n\n", -15, "yoyo");
	ft_printf("8:\n");
	ft_printf("ft_printf = \"%03.10d\"\n", 4242);
	printf("   printf = \"%03.10d\"\n\n", 4242);
	ft_printf("9:\n");
	ft_printf("ft_printf = \"%-3.10s\"\n", "yoyo");
	printf("   printf = \"%-3.10s\"\n\n", "yoyo");
	ft_printf("10:\n");
	ft_printf("ft_printf = \"%015.10d\"\n", 4242);
	printf("   printf = \"%015.10d\"\n\n", 4242);
	ft_printf("11:\n");
	ft_printf("ft_printf = \"%-15.10s\"\n", "yayo");
	printf("   printf = \"%-15.10s\"\n\n", "yayo");
	ft_printf("12:\n");
	ft_printf("ft_printf = \"%-5.2s\"\n", "yayo");
	printf("   printf = \"%-5.2s\"\n\n", "yayo");
	ft_printf("13:\n");
	ft_printf("ft_printf = \"%5.2s\"\n", "yayo");
	printf("   printf = \"%5.2s\"\n\n", "yayo");
	ft_printf("14:\n");
	ft_printf("ft_printf = \"%.2s\"\n", "yayo");
	printf("   printf = \"%.2s\"\n\n", "yayo");
	ft_printf("15:\n");
	ft_printf("ft_printf = \"%010d\"\n", 4241);
	printf("   printf = \"%010d\"\n\n", 4241);
	ft_printf("16:\n");
	ft_printf("ft_printf = \"%%\"\n");
	printf("   printf = \"%%\"\n\n");
	ft_printf("17:\n");
	ft_printf("ft_printf = \"%5%\"\n");
	printf("   printf = \"%5%\"\n\n");
	ft_printf("18:\n");
	ft_printf("ft_printf = \"%-10.6d\"\n", -4242);
	printf("   printf = \"%-10.6d\"\n\n", -4242);
	ft_printf("19:\n");
	ft_printf("ft_printf = \"%03.2d\"\n", -1);
	printf("   printf = \"%03.2d\"\n\n", -1);
	ft_printf("20:\n");
	ft_printf("ft_printf = \"%.10d\"\n", -42);
	printf("   printf = \"%.10d\"\n\n", -42);
	ft_printf("21:\n");
	ft_printf("ft_printf = \"%-0.5%\"\n");
	printf("   printf = \"%-0.5%\"\n\n");
	ft_printf("22:\n");
	ft_printf("ft_printf = \"%-5c\"\n", 'X');
	printf("   printf = \"%-5c\"\n\n", 'X');
	ft_printf("23:\n");
	ft_printf("ft_printf = \"%05d\"\n", -42);
	printf("   printf = \"%05d\"\n\n", -42);
	ft_printf("24:\n");
	ft_printf("ft_printf = \"%5.x\"\n", 0);
	printf("   printf = \"%5.x\"\n\n", 0);
	ft_printf("25:\n");
	ft_printf("ft_printf = \"%5.0x\"\n", 0);
	printf("   printf = \"%5.0x\"\n\n", 0);
	ft_printf("26:\n");
	ft_printf("ft_printf = \"%-2s\"\n", NULL);
	printf("   printf = \"%-2s\"\n\n", NULL);
	ft_printf("27:\n");
	ft_printf("ft_printf = \"%-10.5d\"\n", 4242);
	printf("   printf = \"%-10.5d\"\n\n", 4242);
	ft_printf("28:\n");
	ft_printf("ft_printf = \"%-10.6s\"\n", "yayo");
	printf("   printf = \"%-10.6s\"\n\n", "yayo");
	ft_printf("29:\n");
	ft_printf("ft_printf = \"%c\"\n", 0);
	printf("   printf = \"%c\"\n\n", 0);
	ft_printf("30:\n");
	ft_printf("ft_printf = \"%10c\"\n", '5');
	printf("   printf = \"%10c\"\n\n", '5');
	ft_printf("31:\n");
	ft_printf("ft_printf = \"null %c and text\"\n", 0);
	printf("   printf = \"null %c and text\"\n\n", 0);
	ft_printf("32:\n");
	ft_printf("ft_printf = \"%.2d\"\n", 4242);
	printf("   printf = \"%.2d\"\n\n", 4242);
	ft_printf("33:\n");
	ft_printf("ft_printf = \"%2.2d\"\n", 4242);
	printf("   printf = \"%2.2d\"\n\n", 4242);
	ft_printf("34:\n");
	ft_printf("ft_printf = \"%5.2d\"\n", 4242);
	printf("   printf = \"%5.2d\"\n\n", 4242);
	ft_printf("35:\n");
	ft_printf("ft_printf = \"%.0%\"\n");
	printf("   printf = \"%.0%\"\n\n");
	ft_printf("36:\n");
	ft_printf("ft_printf = \"%5.x\"\n", 42);
	printf("   printf = \"%5.x\"\n\n", 42);
	ft_printf("37:\n");
	ft_printf("ft_printf = \"%5.0x\"\n", 42);
	printf("   printf = \"%5.0x\"\n\n", 42);
	ft_printf("38:\n");
	ft_printf("ft_printf = \"%05.d\"\n", 0);
	printf("   printf = \"%05.d\"\n\n", 0);
	ft_printf("39:\n");
	ft_printf("ft_printf = \"%5.0d\"\n", 0);
	printf("   printf = \"%5.0d\"\n\n", 0);
	ft_printf("40:\n");
	ft_printf("ft_printf = \"%-2c\"\n", 0);
	printf("   printf = \"%-2c\"\n\n", 0);
	ft_printf("41:\n");
	printf("valeur de retour = %d\n", ft_printf("ft_printf = \"%5.d\"\n", 0));
	printf("valeur de retour = %d\n\n", printf("   printf = \"%5.d\"\n", 0));
	ft_printf("42:\n");
	printf("valeur de retour = %d\n", ft_printf("ft_printf = \"%5.0d\"\n", 0));
	printf("valeur de retour = %d\n\n", printf("   printf = \"%5.0d\"\n", 0));
	ft_printf("43:\n");
	printf("valeur de retour = %d\n", ft_printf("@moulitest: %.d %.0d", 0, 0));
	printf("valeur de retour = %d\n\n", printf("@moulitest: %.d %.0d", 0, 0));
	ft_printf("44:\n");
	printf("valeur de retour = %d\n", ft_printf("ft_printf = \"%p\"\n", str));
	printf("valeur de retour = %d\n\n", printf("   printf = \"%p\"\n", str));
	ft_printf("45:\n");
	printf("valeur de retour = %d\n", ft_printf("ft_printf = \"%5p\"\n", str));
	printf("valeur de retour = %d\n\n", printf("   printf = \"%5p\"\n", str));
	ft_printf("46:\n");
	printf("valeur de retour = %d\n", ft_printf("ft_printf = \"%15p\"\n", str));
	printf("valeur de retour = %d\n\n", printf("   printf = \"%15p\"\n", str));
	ft_printf("47:\n");
	printf("valeur de retour = %d\n", ft_printf("ft_printf = \"%p\"\n", NULL));
	printf("valeur de retour = %d\n\n", printf( "   printf = \"%p\"\n", NULL));
	ft_printf("48:\n");
	printf("valeur de retour = %d\n", ft_printf("ft_printf = \"%10p\"\n", NULL));
	printf("valeur de retour = %d\n\n", printf( "   printf = \"%10p\"\n", NULL));
	ft_printf("49:\n");
	ft_printf("ft_printf = \"%*.*d\"\n", -10, 5, 42);
	printf("   printf = \"%*.*d\"\n\n", -10, 5, 42);
	ft_printf("50:\n");
	ft_printf("ft_printf = \"%*.*d\"\n", 10, 5, 42);
	printf("   printf = \"%*.*d\"\n\n", 10, 5, 42);
	ft_printf("51:\n");
	ft_printf("ft_printf = \"%--*.*d\"\n", 10, 5, 42);
	printf("   printf = \"%--*.*d\"\n\n", 10, 5, 42);
	ft_printf("52:\n");
	ft_printf("ft_printf = \"%--00*.*d\"\n", 10, 5, 42);
	printf("   printf = \"%--*.*d\"\n\n", 10, 5, 42);
	ft_printf("53:\n");
	ft_printf("ft_printf = \"%000*.*d\"\n", 10, 5, 42);
	printf("   printf = \"%000*.*d\"\n\n", 10, 5, 42);

	printf("%s %s\n", NULL, str);
	ft_printf("%s %s\n", NULL, str);


	printf("%%%%%%\n");
	ft_printf("%%%%%%\n");

	printf("");
	ft_printf("");
	// printf("%d %d\n", NULL, str);
	// ft_printf("%d %d\n", NULL, str);
	// char *haha;

	// haha = ft_strdup(NULL);
	// printf("%s\n", haha);
	return (0);
}
*/