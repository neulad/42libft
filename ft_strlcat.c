/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:00:55 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/18 18:30:50 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < size && dst[i])
	{
		i++;
	}
	while ((i + j + 1) < size && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != size)
	{
		dst[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}

/* int main()
{
	char *src = "Hello, World!";
	char dst[5];
	size_t dstsize = 5;
	size_t ret;

	ret = strlcat(dst, src, dstsize);
	printf("Return: %zu\n", ret);
	printf("Destination: %s\n", dst);
	return (0);
} */
