/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:12:41 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/16 20:22:37 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}

/* void	ft_test_func_pointer(unsigned int a, char *b)
{
	*b = 'G';
}

int	main(void)
{
	char s[10] = "Hello";
	ft_striteri(s, &ft_test_func_pointer);
	printf("%s\n", s);
	return (0);
} */
