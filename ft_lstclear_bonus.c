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
// Function to create a new node
t_list *create_node(void *content)
{
    t_list *node = (t_list *)malloc(sizeof(t_list));
    if (!node)
    {
        perror("Failed to allocate memory for the new node");
        exit(EXIT_FAILURE);
    }
    node->content = content;
    node->next = NULL;
    return node;
}

// Function to delete int content (used as a sample deletion function)
void delete_int_content(void *content)
{
    // Assuming the content is of type int
    free(content);
}

int main()
{
    // Create a linked list with some sample data
    t_list *head = create_node((void *)malloc(sizeof(int)));
    *((int *)(head->content)) = 42;

    head->next = create_node((void *)malloc(sizeof(int)));
    *((int *)(head->next->content)) = 73;

    head->next->next = create_node((void *)malloc(sizeof(int)));
    *((int *)(head->next->next->content)) = 125;

    // Display the original list
    printf("Original list: ");
    t_list *current = head;
    while (current)
    {
        printf("%d -> ", *((int *)(current->content)));
        current = current->next;
    }
    printf("NULL\n");

    // Clear the list using ft_lstclear
    ft_lstclear(&head, delete_int_content);

    // Display the cleared list (should be NULL)
    printf("Cleared list: ");
    while (head)
    {
        printf("%d -> ", *((int *)(head->content)));
        head = head->next;
    }
    printf("NULL\n");

    return 0;
}

