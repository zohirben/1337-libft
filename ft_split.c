#include "libft.h"

int ft_countword(char *s, char c)
{
    int i;
    int count;
    
    i = 0;
    count = 0;
    while (s[i])
    {
        while (s[i] == c)
        {
            i++;
        }
        if (s[i] != '\0' && s[i] != c)
        {
            count++;
        }
        while (s[i] != c && s[i] != '\0')
        {
            i++;
        }
    }
    return (count);
}

char    **ft_split(char const *s, char c)
{
    int i;
    char    **str;

    str = (char **)malloc(ft_wordcount(s, c) + 1);
    i = 0;
    while (*str)
    {
        while (*str == c && *str)
        {
            str++;
        }
        if (*str != c && *str)
        {
            
        }
    }
}

// int main()
// {
//     char str[] = "xxxxxxHelloxxxxWorldxxxxItsxxxxxxxxMe";
//     printf("%i\n", ft_countword(str, 'x'));
// }