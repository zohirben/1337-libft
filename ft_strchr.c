#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;
    char    *str;
    int len;
    
    i = 0;
    str = (char *) s;
    len = ft_strlen(str);
    while(i <= len)
    {
        if (str[i] == (char) c)
        {
            return (&str[i]);
        }
        i++;
    }
    return (0);
}