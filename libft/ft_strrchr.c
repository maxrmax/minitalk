/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:12:26 by mring             #+#    #+#             */
/*   Updated: 2025/01/27 13:00:10 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;
	char			*result;

	cc = (char)c;
	i = 0;
	result = NULL;
	while (s[i])
	{
		if (s[i] == cc)
			result = ((char *)&s[i]);
		i++;
	}
	if (s[i] == cc)
		result = ((char *)&s[i]);
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*str = "The lack of brainsoup is astonishing!";
// 	char		searchfor;
// 	char		*foundat;

// 	searchfor = 'l';
// 	// foundat = ft_strrchr(str, searchfor);
// 	foundat = ft_strrchr(str, 1024 + 'e');
// 	printf("%c, %ld\n", *foundat, foundat - str);
// 	if (foundat != NULL)
// 	{
// 		printf("Character '%c' at position: %s\n", searchfor, foundat);
// 	}
// 	else
// 	{
// 		printf("Character '%c' not found in the string.\n", searchfor);
// 	}
// }
