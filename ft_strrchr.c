#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    char    *str;
    
    i = ft_strlen(str) + 1;
    str = (char *) s;
    while(--i >= 0)
    {
        if (str[i] == (char)c)
            return (&str[i]);
    }
    return (0);
}

int main()
{
    char str[] = "Hello World";
    printf("%s", ft_strrchr(str, 'l'));
}