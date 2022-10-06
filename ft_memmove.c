#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  i;
    char    *str1;
    char    *str2;

    i = len - 1;
    str1 = (char *) src;
    str2 = (char *) dst;
    while(str1[i] != str1[-1] && i != -1)
    {
        str2[i] = str1[i];
        i--;
    }
    return (str2);
}

int main()
{
    const char src[] = "ABCDE";
    char dst[] = "DE";
    printf("%s\n", ft_memmove(src+2,src,3));
    printf("%s\n", src);

    const char src1[] = "ABCDE";
    char dst1[] = "DE";
    printf("%s\n", memmove(src1+2,src1,3));
    printf("%s", src1);
}