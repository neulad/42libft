/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:23:13 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/18 15:53:06 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

// void	addit_func(char *s)
// {
// 	printf("%s\n", s);
// }
/* int	main(void)
{
	t_list	*lst;
	lst = malloc(sizeof(t_list));
	lst->content = ft_strdup("0123456789");
	lst->next = malloc(sizeof(t_list));
	lst->next->content= ft_strdup("9123456780");
	lst->next->next = NULL;
	ft_lstiter(lst, (void (*)(void *)) & addit_func);
	ft_lstiter(lst, (void (*)(void *)) & addit_func);
	return (0);
} */
