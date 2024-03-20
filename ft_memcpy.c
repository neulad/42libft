/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:05:42 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/16 19:41:36 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *) dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

/* int main()
{
	char str[] = "Hello, port!";
	char *str2 = malloc(13);
	ft_memcpy(str2, str, 13);
	printf("%s\n", str2);
	free(str2);
} */
