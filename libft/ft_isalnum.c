/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:39:39 by mring             #+#    #+#             */
/*   Updated: 2025/01/27 13:01:28 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int alnum)
{
	if ((alnum >= '0' && alnum <= '9') || (alnum >= 'A' && alnum <= 'Z')
		|| (alnum >= 'a' && alnum <= 'z'))
		return (1);
	return (0);
}

// checks if the passed value is alpha numeric

// #include <stdio.h>
// int	main(void)
// {
// 	printf("A: %d\n", ft_isalnum('A'));
// 	printf("1: %d\n", ft_isalnum('1'));
// 	printf("@: %d\n", ft_isalnum('@'));
// }
