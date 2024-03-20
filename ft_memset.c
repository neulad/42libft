/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:46:02 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/11 19:03:48 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n-- > 0)
		*ptr++ = (unsigned char)c;
	return (s);
}

/* int main()
{
	char str[50] = "Hello, World!";
	ft_memset(str, 'a', 5);
	printf("%s\n", str);
	ft_memset(str, 'b', 5);
	printf("%s\n", str);
	ft_memset(str, 'c', 5);
	printf("%s\n", str);
	ft_memset(str, 'd', 5);
	printf("%s\n", str);
	ft_memset(str, 'e', 5);
	printf("%s\n", str);
} */
