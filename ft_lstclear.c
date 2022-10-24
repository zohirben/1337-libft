#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *ptr;

    if (!del || !*lst)
        return ;
    ptr = *lst;
    while (ptr)
    {
        ft_lstdelone(*lst, del);
        ptr = ptr->next;
        *lst = ptr;
    }
}

// void    ft_del(void *content)
// {
//     printf("%s\n", content);
// }

// int main()
// {
//     t_list *head;
//     t_list *second;
//     t_list *third;
//     t_list *fourth;
//     t_list *ptr;
//     head = (t_list *)malloc(sizeof(t_list));
//     second = (t_list *)malloc(sizeof(t_list));
//     third = (t_list *)malloc(sizeof(t_list));
//     fourth = (t_list *)malloc(sizeof(t_list));
//     head->content = "one";
//     head->next = second;
//     second->content = "two";
//     second->next = third;
//     third->content = "three";
//     third->next = fourth;
//     fourth->content = "last";
//     fourth->next = NULL;

//     ft_lstclear(&head, ft_del);
// }