#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (*lst == NULL)
    {
        *lst = new;
        new->next = NULL;
        return;
    }

    t_list *temp = *lst;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new;
    new->next = NULL;
}