#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char    C;
    char    *str;
    
    i = 0;
    C = (unsigned char) c;
    str = (char *) s;
    while(str[i] && i < n)
    {
        if (str[i] == C)
        {
            return (&str[i]);
        }
        i++;
    }
    return (0);
}
