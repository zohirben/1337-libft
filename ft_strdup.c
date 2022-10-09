#include "libft.h"

char    *ft_strdup(const char *s1)
{
    int i;
    char    *str;

    i = 0;
    str = (char *)malloc(strlen(s1) + 1);
    if (!str)
        return (0);
    memcpy(str, s1, strlen(s1));
    //memcpy should be ft_memcpy
    str[ft_strlen(s1)] = '\0';
    return (str);
}

// int main()
// {
//     char *str;
//     str = ft_strdup("Hello World");
//     printf("%s\n", str);
// }