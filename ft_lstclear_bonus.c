/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabir <asabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:15:56 by asabir            #+#    #+#             */
/*   Updated: 2023/11/28 23:15:57 by asabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (*lst && del)
	{
		while ((*lst))
		{
			next = (*lst)->next;
			del((*lst)->content);
			free((*lst));
			*lst = next;
		}
		*lst = NULL;
	}
}
