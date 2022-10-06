#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;
    
    i = 0;

    while(s1[i] && s2[i] && i < n)
    {
        if ((unsigned char) s1[i] > (unsigned char) s2[i])
            return (1);
        else if ((unsigned char) s1[i] < (unsigned char) s2[i])
            return (-1);
        else
            i++;
    }
    return (0);
}

int main()
{
    char str1[] = "ABCzE";
    char str2[] = "ABCDE";
    printf("%i\n", ft_strncmp(str1, str2, 5));
    char str11[] = "ABCzE";
    char str21[] = "ABCDE";
    printf("%i", ft_strncmp(str11, str21, 5));
}