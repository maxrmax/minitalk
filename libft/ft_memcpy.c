/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:37:55 by mring             #+#    #+#             */
/*   Updated: 2025/01/27 13:02:58 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*temp_dst;
	const unsigned char	*temp_src;

	temp_dst = dst;
	temp_src = src;
	count = 0;
	if (!dst && !src)
		return (dst);
	while (count < n)
	{
		temp_dst[count] = temp_src[count];
		count++;
	}
	return (dst);
}

//

// int	main(void)
// {
// 	char src[] = "bruh idk man";
// 	char dst[] = "lets see it!";
// 	ft_memcpy(dst, src, 10);
// 	printf("%s\n", dst);
// }
