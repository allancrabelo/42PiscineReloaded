/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:54:13 by aaugusto          #+#    #+#             */
/*   Updated: 2025/04/02 17:01:45 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/* 
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *str = "42 School";

	printf("Original Strlen: %ld\n", strlen(str));
	printf("Dupe ft_strlen: %d\n", ft_strlen(str));
} */