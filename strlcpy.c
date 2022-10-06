#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  dstlen;
    
    i = 0;
    while(src[i] && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dstlen = strlen(src);
    dst[i] = '\0';
    
    return (dstlen);
}

int main()
{
    char *src = "Hello Worldew";
    char dst[] = "Salam";
    printf("%i\n", strlcpy(dst, src, 5));
    printf("%s\n", dst);
    char *src1 = "Hello Worldds";
    char dst1[] = "Salam";
    printf("%i\n", ft_strlcpy(dst1, src1, 5));
    printf("%s\n", dst1);
}