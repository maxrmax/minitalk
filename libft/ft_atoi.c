/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:27:45 by mring             #+#    #+#             */
/*   Updated: 2025/03/03 10:41:15 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	vorzeichen;
	int	i;

	i = 0;
	result = 0;
	vorzeichen = 1;
	while (str[i] == 9 || str[i] == 10 || str[i] == 11 || str[i] == 12
		|| str[i] == 13 || str[i] == 32)
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		vorzeichen = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= vorzeichen;
	return (result);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char	*str;
// 	int		result;

// 	str = "  2147483648  ";
// 	result = atoi(str);
// 	printf("Before: %s, After: %i\n", str, result);
// 	result = ft_atoi(str);
// 	printf("Before: %s, After: %i\n", str, result);
// }
