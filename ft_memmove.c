/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:12:02 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/18 18:28:22 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, int n)
{
	char	*csrc;
	char	*cdest;
	int		i;

	csrc = (char *)src;
	cdest = (char *)dest;
	i = 0;
	if (cdest > csrc)
		while (n-- > 0)
			cdest[n] = csrc[n];
	else
	{
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	return (dest);
}

/* int main()
{
	char src[] = "lorem ipsum dolor sit amet";
	char *dest;
	dest = src + 1;
	printf("%s\n", dest);
	char	*res;
	res = memmove(src, dest, 8);
	printf("%s\n", res);
} */
