#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if ( *lst == NULL)
    {
         *lst = new;
         new->next = NULL;
    }

    while ((*lst)->next != NULL)
    {
        *lst = (*lst)->next;
    }
    (*lst)->next = new;
    new->next = NULL; 
}
