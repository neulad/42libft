/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:36:38 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/11 16:39:17 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/* int main()
{
	printf("%d\n", ft_isascii('\n'));
	printf("%d\n", ft_isascii('1'));
	printf("%d\n", ft_isascii('e'));
	printf("%d\n", ft_isascii('f'));
	printf("%d\n", ft_isascii(999));
} */
