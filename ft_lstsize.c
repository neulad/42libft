/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:15:30 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/18 17:20:58 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

/* int	main(void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*new2;

	lst = malloc(sizeof(t_list));
	new = malloc(sizeof(t_list));
	new2 = malloc(sizeof(t_list));
	printf("%d\n", ft_lstsize(lst));
	lst->content = "World";
	lst->next = NULL;
	new->content = "Hello";
	new->next = NULL;
	new2->content = "Hello";
	new2->next = NULL;
	ft_lstadd_front(&lst, new);
	ft_lstadd_front(&lst, new2);
	printf("%d\n", ft_lstsize(lst));
	return (0);
} */
