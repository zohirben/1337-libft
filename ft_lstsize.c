#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while(lst != NULL)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}


// int main()
// {
//     t_list *head;
//     t_list *second;
//     t_list *third;
//     t_list *fourth;
//     head = (t_list *)malloc(sizeof(t_list));
//     second = (t_list *)malloc(sizeof(t_list));
//     third = (t_list *)malloc(sizeof(t_list));
//     fourth = (t_list *)malloc(sizeof(t_list));
//     int i = 0;
//     head->content = 1;
//     head->next = second;
//     second->content = 2;
//     second->next = third;
//     third->content = 3;
//     third->next = fourth;
//     fourth->content = 4;
//     fourth->next = NULL;
//     printf("%i\n", ft_lstsize(head));
// }