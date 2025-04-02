/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:33:34 by aaugusto          #+#    #+#             */
/*   Updated: 2025/04/02 16:42:54 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* #include <stdio.h>

int	main(void)
{
	int	x;
	int y;
	int div;
	int mod;

	x = 42;
	y = 2;

	ft_div_mod(x, y, &div, &mod);
	
	printf("Division: %d\n", div);
	printf("Module: %d\n", mod);
	return (0);
} */