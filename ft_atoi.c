/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:31:56 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/18 15:25:16 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_atoi_formatter(char **a, int *sign)
{
	while (ft_isspace(**a))
		(*a)++;
	if (**a == '-' || **a == '+')
	{
		if (**a == '-')
			*sign *= -1;
		(*a)++;
	}
}

int	ft_atoi(const char *nptr)
{
	int		res;
	char	*cnptr;
	int		sign;

	cnptr = (char *)nptr;
	sign = 1;
	res = 0;
	ft_atoi_formatter(&cnptr, &sign);
	while (ft_isdigit(*cnptr))
	{
		res = res * 10 + (*cnptr - '0') * sign;
		cnptr++;
	}
	return (res);
}

/* int main()
{
	char *str = "2147483649";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return (0);
} */
