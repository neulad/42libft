/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:35:46 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/11 16:39:05 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/* int main()
{
	printf("%d\n", ft_isprint('\n'));
	printf("%d\n", ft_isprint('1'));
	printf("%d\n", ft_isprint('e'));
	printf("%d\n", ft_isprint('f'));
	printf("%d\n", ft_isprint(999));
} */
