/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:26:07 by aaugusto          #+#    #+#             */
/*   Updated: 2025/04/02 16:32:10 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/* 
#include <stdio.h>
int	main(void)
{
	int	x;
	int	y;

	x = 42;
	y = 24;

	printf("Before swap: x = %d | y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("After swap: x = %d | y = %d\n", x, y);
	return (0);
} */