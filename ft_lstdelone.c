/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:49:10 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/18 14:58:47 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

/* int	main(void)
{
	t_list	*lst;
	char	*str;

	lst = malloc(sizeof(t_list));
	str = malloc(sizeof(char) *  11);
	lst->content = str;
	ft_lstdelone(lst, free);
	return (0);
} */
