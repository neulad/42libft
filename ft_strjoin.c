/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 20:26:03 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/13 12:59:54 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*fin_str;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	fin_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!fin_str)
		return (NULL);
	fin_str[len1 + len2] = '\0';
	while (len2--)
		fin_str[len1 + len2] = s2[len2];
	while (len1--)
		fin_str[len1] = s1[len1];
	return (fin_str);
}

/* int main()
{
	char *s1 = "Goodbye ";
	char *s2 = "abyss!";
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
} */
