/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:06:58 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/13 13:00:38 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cstr;
	size_t	len;

	len = ft_strlen(s);
	cstr = (char *) malloc(sizeof(char) * (len + 1));
	if (cstr)
	{
		ft_memcpy(cstr, s, len);
		cstr[len] = '\0';
	}
	return (cstr);
}

/* int main()
{
	char *s = "Hello";
	printf("%s\n", strdup(s));
	return (0);
} */
