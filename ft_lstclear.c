/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:01:28 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/18 15:34:10 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = tmp;
	}
	*lst = NULL;
}

/* int	main(void)
{
	t_list	*lst;
	lst = malloc(sizeof(t_list));
	lst->content = ft_strdup("0123456789");
	lst->next = malloc(sizeof(t_list));
	lst->next->content= ft_strdup("9123456780");
	lst->next->next = NULL;
	ft_lstclear(&lst, free);
	printf("%p\n", lst);
	return (0);
} */
