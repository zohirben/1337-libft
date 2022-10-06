#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t  i;
    char    *str1;
    char    *str2;

    i = 0;
    str1 = (char *) src;
    str2 = (char *) dst;
    while(str1[i] && str2[i] && i < n)
    {
        str2[i] = str1[i];
        i++;
    }
    return (str2);
}

int main()
{
    const char src[] = "ABCDE";
    printf("%s\n", ft_memcpy(src+2,src,3));
    printf("%s", src);
}