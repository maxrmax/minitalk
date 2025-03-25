/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:30:45 by mring             #+#    #+#             */
/*   Updated: 2025/01/27 12:59:58 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, int start, size_t len)
{
	int		i;
	char	*substr;

	i = 0;
	if (start >= ft_strlen(s) || start < 0)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - (size_t)start)
		len = ft_strlen(s) - (size_t)start;
	while (i < start)
		i++;
	substr = ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, &s[i], len + 1);
	return (substr);
}

// int	main(void)
// {
// 	char *str = "do not google your own symptoms.";
// 	printf("ft: %s\n", ft_substr(str, 7, 18446744073709551615));
// }
