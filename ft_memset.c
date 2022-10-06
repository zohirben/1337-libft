#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t  i;
    char    *str;

    i = 0;
    str = (char *) b;
    while (str[i] && i < len)
    {
        str[i] = (unsigned char) c;
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