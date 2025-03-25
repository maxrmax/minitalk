/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:12:29 by mring             #+#    #+#             */
/*   Updated: 2025/01/27 13:11:07 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t length)
{
	size_t	i_hay;
	size_t	i_nee;

	i_hay = 0;
	i_nee = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (haystack[i_hay] && i_nee < length)
	{
		while (haystack[i_hay + i_nee] == needle[i_nee] && haystack[i_hay
				+ i_nee] && i_hay + i_nee < length)
		{
			i_nee++;
			if (needle[i_nee] == 0)
				return ((char *)haystack + i_hay);
		}
		i_hay++;
		i_nee = 0;
	}
	return (0);
}

// search needle in haystack.
// how?
// check if needle is in haystack, char by char.
// if needle 0 is in haystack, needle +1
// if needle 1 is not, haystack +1, needle to 0
