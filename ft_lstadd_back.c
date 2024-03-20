/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:40:18 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/18 17:22:22 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (!last)
		*lst = new;
	else
		last->next = new;
}

/* int	main(void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*new2;

	lst = malloc(sizeof(t_list));
	new = malloc(sizeof(t_list));
	new2 = malloc(sizeof(t_list));
	lst->content = "First element";
	new->content = "Second element";
	new2->content = "Last element";
	lst->next = new;
	new2->next = NULL;
	lst = NULL;
	ft_lstadd_back(&lst, new2);
	printf("%d\n", ft_lstsize(lst));
	// printf("%s\n", lst->next->next->content);
	return (0);
} */
