/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 09:49:40 by mring             #+#    #+#             */
/*   Updated: 2025/01/27 13:02:49 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str_temp;
	unsigned char	char_temp;
	size_t			count;

	str_temp = (unsigned char *)str;
	char_temp = (unsigned char)c;
	count = 0;
	while (count < n)
	{
		if (str_temp[count] == char_temp)
			return ((void *)&str_temp[count]);
		count++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     const char *str = "idk yet but here i go";
//     int searchingthis = 'h';
//     size_t str_length = ft_strlen(str);

//     void *result = memchr(str, searchingthis, str_length);
//     void *ft_result = ft_memchr(str, searchingthis, str_length);

//     if (ft_result != NULL)
//     {
//         printf("Character found at position: %li\n", (char *)result - str);
//         printf("Character found at position: %li\n", (char *)ft_result
//	- str);
//     }
//     else
//     {
//         printf("Character not found.\n");
//     }
// }
