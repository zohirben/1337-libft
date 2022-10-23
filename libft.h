#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include<fcntl.h>

typedef struct   s_list
{
    void    *content;
    struct s_list   *next;
}                   t_list;

size_t ft_strlen(const char *str);
int ft_isalpha(int c);
char    *ft_substr(char const *s, unsigned int start, size_t len);
void    ft_putchar_fd(char c, int fd);
t_list *ft_lstlast(t_list *lst);



#endif
