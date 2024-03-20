/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:50:22 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/15 14:20:40 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/* char	ft_test_func_pointer(unsigned int a, char b)
{
	return ft_toupper(b);
}

int	main(void)
{
	char	*str = "Hello";
	char	*res;

	res = ft_strmapi(str, &ft_test_func_pointer);
	printf("%s\n", res);
	free(res);
	return (0);
} */
