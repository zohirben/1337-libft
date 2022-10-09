#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char    *str;

    if (!s)
        return (0);
    str = (char *) malloc(len + 1);
    if (!str)
        return (0);
    if (start >= strlen(s))
        return (str);
    i = 0;
    while (i < len)
    {
        str[i++] = s[start++];
    }
    str[i] = '\0';
    return (str);
}

// int main()
// {
//     char *str;
//     str = ft_substr("No More Bite No Bark", 18, 4);
//     printf("%s", str);
// }