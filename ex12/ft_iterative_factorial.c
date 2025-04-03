/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:38:03 by aaugusto          #+#    #+#             */
/*   Updated: 2025/04/03 15:54:37 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb >= 0 && nb <= 12)
		i = 1;
	else
		return (0);
	while (nb > 0)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
/* 
#include <stdio.h>
int	main(void)
{
	int	i;

	i = 5;
	printf("%d\n", ft_iterative_factorial(i));
	return (0);
} */