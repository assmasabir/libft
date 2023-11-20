#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if(lst && f)
    {
        while (lst->next)
        {
            f(lst->content);
            lst = lst->next;
        }
    }
}
