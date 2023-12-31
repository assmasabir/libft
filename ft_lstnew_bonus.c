/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabir <asabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:16:20 by asabir            #+#    #+#             */
/*   Updated: 2023/11/28 23:16:21 by asabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*pt;

	pt = (t_list *)malloc(sizeof(t_list));
	if (pt)
	{
		pt->next = NULL;
		pt->content = content;
	}
	return (pt);
}
// int main ()
// {
//     int value = 42;
//     void *cont;
//     cont = &value;
//     t_list *t = ft_lstnew(cont);
//     int* res;
//     res = (int*)t->content;
//     printf("%d", *((res)));
// }