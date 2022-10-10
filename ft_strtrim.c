#include "libft.h"

int ft_CharFind(const char *str, char c) 
{
    int i;

    i = 0;
    while (str[i])
    {
        if (c == str[i])
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    char    *str;

    if (!s1 || !set)
        return (0);
    start = 0;
    end = ft_strlen(s1) - 1;
    while (s1[start])
    {
        if (ft_CharFind(set, s1[start]))
            start++;
        else
            break;
    }
    while (start < end)
    {
        if (ft_CharFind(set, s1[end]))
            end--;
        else
            break;
    }
    str = (char *)malloc((end - start) + 1);
    if (!str)
        return (0);
    str = ft_substr(s1, start, (end - start) + 1);
    return (str);
}

// int main()
// {
//     char *str;
//     char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !";
//     char *set = " \n\t";
//     // char *s2 = "Hello \t  Please\n Trim me !";
//     str = ft_strtrim(s1, set);
//     printf("%s\n", str);
//     printf("%s\n", &s1[16]);
// }