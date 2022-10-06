#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    char    *src1;

    i = 0;
    src1 = (char *) src;
    while(src1[i] && i < dstsize - 1)
    {
        dst[i] = src1[i];
        i++;
    }
    dst[i] = '\0';
    
    return (ft_strlen(src1));
}

int main()
{
    char *src = "Hello Worldew";
    char dst[] = "Salam";
    printf("%lu\n", strlcpy(dst, src, 5));
    printf("%s\n", dst);
    char *src1 = "Hello Worldds";
    char dst1[] = "Salam";
    printf("%lu\n", ft_strlcpy(dst1, src1, 5));
    printf("%s\n", dst1);
}