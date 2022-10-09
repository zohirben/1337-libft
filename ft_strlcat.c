#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  j;
    size_t  dstlen;
    size_t destnow;


    i = 0;
    j = 0;
    if (dstsize == 0)
        return (0);
    destnow = ft_strlen(dst);
    dstlen = dstsize - ft_strlen(dst) - 1;
    if (dstsize < destnow)
        return (ft_strlen(src) + dstsize);
    i = destnow;
    while(j < dstlen)
    {
        dst[i++] = src[j++];
    }
    dst[i] = '\0';
    
    if (dstsize > destnow)
        return (ft_strlen(src) + destnow);
    return (0);
}