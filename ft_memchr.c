#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char    *str;
    
    i = 0;
    str = (unsigned char *) s;
    while(i < n)
    {
        if (str[i] == (unsigned char) c)
        {
            return (&str[i]);
        }
        i++;
    }
    return (0);
}

// int main()
// {
//     char str[] = "Hello This is meh";
//     printf("%s\n", ft_memchr(str, 'T', 8));
//     printf("%s", memchr(str, 'T', 8));
// }