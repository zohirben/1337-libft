#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list *head;

    head = (t_list *)malloc(sizeof(t_list));
    if (!head)
        return (0);
    head->content = content;
    head->next = NULL;
    return (head);
}

// int main()
// {
//     t_list *ptr;

//     ptr = ft_lstnew('E');
//     printf("%c", ptr->content);
// }