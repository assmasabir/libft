/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabir <asabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:14:32 by asabir            #+#    #+#             */
/*   Updated: 2023/12/02 14:49:27 by asabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first;
	void	*pt;

	if (lst && f && del)
	{
		first = NULL;
		while (lst)
		{
			pt = f(lst->content);
			new = ft_lstnew(pt);
			if (!new)
			{
				del(pt);
				ft_lstclear(&first, del);
				return (NULL);
			}
			ft_lstadd_back(&first, new);
			lst = lst->next;
		}
		return (first);
	}
	return (NULL);
}
// #include<stdio.h>
// void	*multiply_by_two(void *data)
// {
// 	int	*value;
// 	int	*result;

// 	value = (int *)data;
// 	result = (int *)malloc(sizeof(int));
// 	if (!result)
// 		return (NULL);
// 	*result = (*value) * 2;
// 	return (result);
// }

// void	free_data(void *data)
// {
// 	free(data);
// }

// int main()
// {

//     t_list *lst = (t_list *)malloc(sizeof(t_list));
// 	t_list *lst2 = (t_list *)malloc(sizeof(t_list));
//     lst->content = (void *)malloc(sizeof(int));
// 	lst2->content = (void *)malloc(sizeof(int));
//     *((int *)(lst->content)) = 5;
//     lst->next = lst2;
// 	*((int *)(lst->content)) = 9;
//     lst->next = NULL;

//     t_list *new_lst = ft_lstmap(lst, multiply_by_two, free_data);

//     printf("Original list: ");
//     while (lst)
//     {
//         printf("%d -> ", *((int *)(lst->content)));
//         lst = lst->next;
//     }
//     printf("NULL\n");

//     printf("New list: ");
//     while (new_lst)
//     {
//         printf("%d -> ", *((int *)(new_lst->content)));
//         new_lst = new_lst->next;
//     }
//     printf("NULL\n");

//     return (0);
// }
