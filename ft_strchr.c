/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:17:27 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/19 14:44:39 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	unsigned char	cc;

	cc = (unsigned char) c;
	while (*s)
	{
		if (*s == cc)
			return ((char *) s);
		s++;
	}
	if (*s == cc)
		return ((char *) s);
	return (NULL);
}

/* int main()
{
	char str[] = "bonjour";
	char str2[] = "qe1=";
	char c = '\0';
	printf("%s\n", ft_strchr(str, c));
	printf("%s\n", strchr(str2, c));
	// printf("%s\n", strchr(s, 'z'));
	return (0);
} */
