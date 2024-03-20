/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:59:04 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/18 19:38:47 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*find_substring;
	size_t	substr_len;
	size_t	i;
	size_t	j;

	substr_len = ft_strlen((char *)little);
	find_substring = NULL;
	if (!substr_len || big == (char *)little)
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j]
			&& big[i + j] && little[j]
			&& i + j < len)
			j++;
		if (j == substr_len)
		{
			find_substring = (char *)(big + i);
			break ;
		}
		i++;
	}
	return (find_substring);
}

/* int main()
{
	char *big = "";
	char *little = "el1";
	printf("%s\n", ft_strnstr(big, little, 11));
	printf("%s\n", strnstr(big, little, 11));
	printf("%s\n", ft_strnstr(big, little, 11));
	return (0);
} */
