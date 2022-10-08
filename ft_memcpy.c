#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t  i;
    char    *str1;
    char    *str2;

    i = 0;
    str1 = (char *) src;
    str2 = (char *) dst;
    while(i < n)
    {
        str2[i] = str1[i];
        i++;
    }
    return (str2);
}