#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;
    char    *str;
    char    *sub;

    str = (char *) haystack;
    sub = (char *) needle;
    i = 0;
    j = 0;
    if (*sub == '\0')
        return (str);
    while(i < len)
    {
        j = 0;
        while(str[i + j] == sub[j] && sub[j] && (j + i) < len)
        {
            j++;
        }
        if (sub[j] == '\0')
            return (&str[i]);
        i++;
    }
    return (0);
}

// int main()
// {
//     char str[] = "Hello World This Is Me :D";
//     char sub[] = "Wor";
//     printf("%s\n", ft_strnstr(str, sub, 4));
//     printf("%s", strnstr(str, sub, 4));
// }