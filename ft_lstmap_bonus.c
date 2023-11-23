#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *next;

    if(*lst && del)
    {
        while ((*lst)->next)
        {
            next = (*lst)->next;
            del((*lst)->content);
            free((*lst));
            *lst = next;
            
        }
        *lst = NULL;
    }
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    if (lst && f && del)
    {
        t_list *new;
        t_list *first;
        t_list *pt;

        new = (t_list*)malloc(sizeof(t_list));
        if (!new)
            return (NULL);
        first = new;
        pt = lst;
        while (pt)
        {
            new->content = f(pt->content);
            pt = pt->next;
            new->next = (t_list *)malloc(sizeof(t_list));
            if (!new->next)
            {
                ft_lstclear(&first, del);
                return (NULL);
            }
            new = new->next;
        }
        new->next = NULL;
        return (first);
    }
    return (NULL);
}



void *multiply_by_two(void *data)
{
    int *value = (int *)data;
    int *result = (int *)malloc(sizeof(int));
    if (!result)
        return NULL;

    *result = (*value) * 2;
    return result;
}


void free_data(void *data)
{
    free(data);
}

int main()
{

    t_list *lst = (t_list *)malloc(sizeof(t_list));
    lst->content = (void *)malloc(sizeof(int));
    *((int *)(lst->content)) = 5;
    lst->next = NULL;

    t_list *new_lst = ft_lstmap(lst, multiply_by_two, free_data);

    printf("Original list: ");
    while (lst)
    {
        printf("%d -> ", *((int *)(lst->content)));
        lst = lst->next;
    }
    printf("NULL\n");

    printf("New list: ");
    while (new_lst)
    {
        printf("%d -> ", *((int *)(new_lst->content)));
        new_lst = new_lst->next;
    }
    printf("NULL\n");

    return 0;
}

