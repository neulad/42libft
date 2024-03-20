/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:16:27 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/18 20:01:57 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	index;

	index = 0;
	if (n == 0)
		return (0);
	while (index < n - 1 && str1[index]
		&& str2[index] && str1[index] == str2[index])
		index++;
	return ((unsigned char)str1[index] - (unsigned char)str2[index]);
}

/* int main()
{
	char *s1 = "Hell";
	char *s2 = "Hel";
	printf("%d\n", ft_strncmp(s1, s2, 10));
	return 0;
} */
