/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 09:34:30 by aaugusto          #+#    #+#             */
/*   Updated: 2025/04/03 09:51:11 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	range = (int *)malloc((max - min) * sizeof(int));
	if (!range)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/* 
#include <stdio.h>
int	main(void)
{
	int	*arr;
	int	max;
	int	min;
	int	i;
	
	max = 10;
	min = 3;
	i = 0;
	arr = ft_range(min, max);
	if (arr)
	{
		while(i < max - min)
		{
			printf("%d ", arr[i]);
			i++;
		}
		printf("\n");
		free(arr);
	}
	return (0);
} */