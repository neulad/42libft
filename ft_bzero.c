/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:57:02 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/11 16:39:29 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, int n)
{
	while (n-- > 0)
		*(char *)s++ = '\0';
}

/* int main()
{
	char str[] = "Hello, World!";
	bzero(str + 3, 5);
	printf("%s\n", str);
} */
