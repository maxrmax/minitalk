/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:37:46 by mring             #+#    #+#             */
/*   Updated: 2025/01/27 13:01:01 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize > src_len + 1)
		ft_memcpy(dst, src, src_len + 1);
	else if (dstsize)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = 0;
	}
	return (src_len);
}

// int main(void)
// {
// 	char str[] = "random string";
// 	char str2[15];
// 	printf("str1: %s\nstr2: %s\n", str, str2);
// 	ft_strlcpy(str2, str, 9);
// 	printf("str1: %s\nstr2: %s\n", str, str2);
// }

/*#include <stdio.h>

int	main(void)
{
	char destination[16]; // Destination buffer
	const char *source = "Hello, strlcpy!";

	// Copy 'source' into 'destination' with a maximum size of 20 bytes
	size_t copied = ft_strlcpy(destination, source, sizeof(destination));

	// Check if the copy operation was successful
	if (copied >= sizeof(destination)) {
		printf("String was truncated.\n");
	} else {
		printf("Copied string: %s\n", destination);
		printf("Number of bytes copied: %zu\n", copied);
	}

	return (0);
}*/
