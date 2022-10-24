#include "libft.h"

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst)
        return;
    if (!del)
        return;
    del(lst->content);
    free(lst);
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

//     ft_lstdelone(head, ft_del);
// }