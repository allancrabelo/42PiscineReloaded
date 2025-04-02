/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:01:53 by aaugusto          #+#    #+#             */
/*   Updated: 2025/04/02 16:13:43 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

/* int	main(void)
{
	// Test: Negative numbers - Should return 'N'
	ft_is_negative(-42);
	ft_putchar('\n');
	// Test: Null case - Should return 'P'
	ft_is_negative(0);
	ft_putchar('\n');
	// Test: Positive numbers - Should return 'P'
	ft_is_negative(42);
	ft_putchar('\n');
	return (0);
} */