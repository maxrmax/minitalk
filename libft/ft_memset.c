/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:17:49 by mring             #+#    #+#             */
/*   Updated: 2025/01/27 13:03:24 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	count;

	count = 0;
	while (count < len)
	{
		((unsigned char *)b)[count] = c;
		count++;
	}
	return (b);
}

// DESCRIPTION
//      The memset() function writes len bytes of value c
// (converted to an unsigned char) to the string b.
// we create a void function named memset. The passed arguments are the string,
// as a void pointer -> void *b,
// the ascii character to set -> int c (ASCII number value),
// and the length to replace in size_t

// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "SCREAM FOR ME";
// 	printf("%s\n", str);
// 	printf("%s\n", ft_memset(str, 65, 10)); // 65 ASCII is A
// }
