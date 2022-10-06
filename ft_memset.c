#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t  i;
    char    *str;
    unsigned char   C;

    i = 0;
    str = (char *) b;
    C = c;
    while (str[i] && i < len)
    {
        str[i] = C;
        i++;
    }
    return (str);
}

int main (void)
{
    char str[] = "Hello World";
    char str2[] = "Hello World";
    printf("%s\n", ft_memset(str, '5', 6));
    printf("%s", memset(str2, '5', 6));
}