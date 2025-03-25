/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:24:06 by mring             #+#    #+#             */
/*   Updated: 2025/01/27 13:02:06 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	nr;
	int		i;

	nr = n;
	i = digit_count(n);
	result = ft_calloc(i + 1, sizeof(char));
	if (!result)
		return (NULL);
	result[i] = '\0';
	if (n == 0)
		return (result[0] = '0', result);
	if (nr < 0)
	{
		nr = -nr;
		result[0] = '-';
	}
	while ((i > 0 && nr > 0) || (i > 1 && result[0] == '-'))
	{
		result[i - 1] = (nr % 10) + '0';
		nr = nr / 10;
		i--;
	}
	return (result);
}

// int	main(void)
// {
// 	int		inter;
// 	char	*string;

// 	inter = -0;
// 	string = ft_itoa(inter);
// 	if (string[0] == 0)
// 		printf("string is NULL");
// 	else
// 		printf("string:%s", string);
// 	free(string);
// }
