#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int length;

    length = 0;

    while(lst != NULL)
    {
        lst = lst->next;
        length++;
    }
    return(length);
}
int main ()
{
    t_list *head = NULL;
    t_list *second = NULL;
    t_list *third = NULL;
    int i = 1;
    int b = 2;
    int c = 3;

    head = (t_list *)malloc(sizeof(t_list));
    second = (t_list *)malloc(sizeof(t_list));
    third = (t_list *)malloc(sizeof(t_list));

    head->content = &i;
    head->next = second;

    second->content = &b;
    second->next = third;

    third->content = &c;
    third->next = NULL;

    int size = ft_lstsize(head);
    printf("Size of the linked list: %d\n", size);

    free(head);
    free(second);
    free(third);

    return 0; 
}