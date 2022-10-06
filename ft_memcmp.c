#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    unsigned char   *str1;
    unsigned char   *str2;

    i = 0;
    str1 = (unsigned char *) s1;
    str2 = (unsigned char *) s2;
    while(i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}

int main()
{
    char str1[] = "ABCDE";
    char str2[] = "AB";
    printf("%i\n", memcmp(str1, str2, 4));
    char str11[] = "ABCDE";
    char str21[] = "AB";
    printf("%i", ft_memcmp(str11, str21, 4));
}