#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;
    char    C;
    char    *str;
    
    i = 0;
    C = (char) c;
    str = (char *) s;
    while(str[i] != str[strlen(str)+1])
    {
        if (str[i] == C)
        {
            return (&str[i]);
        }
        i++;
    }
    return (0);
}

int main()
{
    char str[] = "Hello";
    printf("%s", ft_strchr(str, '\0'));
}