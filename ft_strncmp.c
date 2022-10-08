#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;
    
    i = 0;

    while((s1[i] || s2[i]) && i < n)
    {
        if ((unsigned char) s1[i] > (unsigned char) s2[i])
            return (1);
        else if ((unsigned char) s1[i] < (unsigned char) s2[i])
            return (-1);
        else
            i++;
    }
    return (0);
}