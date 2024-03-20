/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:29:18 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/18 17:14:03 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (NULL);
	last = lst;
	while (last->next)
		last = last->next;
	return (last);
}

/* int	main(void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*new2;

	lst = malloc(sizeof(t_list));
	new = malloc(sizeof(t_list));
	new2 = malloc(sizeof(t_list));
	lst->content = "Last element";
	ft_lstadd_front(&lst, new);
	ft_lstadd_front(&lst, new2);
	if (ft_lstlast(NULL) == NULL)
		printf("is NULL");
	// printf("%s\n", ft_lstlast(lst)->content);
	return (0);
} */
