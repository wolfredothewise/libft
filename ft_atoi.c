/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhedo-ga <vhedo-ga <vhedo-ga@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:59:29 by vhedo-ga          #+#    #+#             */
/*   Updated: 2026/01/14 09:27:00 by vhedo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+')
		i = i + 1;
	else if (nptr[i] == '-')
	{
		sign = sign * -1;
		i = i + 1;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char *nptr;

// 	nptr = "   +123";
// 	printf("FT:%d\n", ft_atoi(nptr));
// 	printf("ATOI:%d\n", atoi(nptr));
// 	return (0);
// }