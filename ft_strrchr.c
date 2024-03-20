/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:57:02 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/18 19:10:24 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		j;
	char	*search_result;
	char	current_char;

	current_char = (char)c;
	search_result = NULL;
	j = 0;
	while (s[j])
	{
		if (s[j] == current_char)
			search_result = (char *)&s[j];
		j++;
	}
	if (s[j] == c)
		search_result = (char *)&s[j];
	return (search_result);
}

/* int main()
{
	char *s = "Hello, World!";
	int c = 'l';
	printf("%s\n", strrchr(s, c));
	printf("%s\n", ft_strrchr(s, c));
	return 0;
} */
