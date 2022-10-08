#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  j;
    size_t  dstlen;
    char    *source;
    size_t destnow;


    i = 0;
    j = 0;
    destnow = ft_strlen(dst);
    source = (char *) src;
    dstlen = dstsize - ft_strlen(dst) - 1;
    if (dstsize < destnow)
        return (ft_strlen(source) + dstsize);
    while(dst[i])
        i++;
    while(src[j] && j < dstlen)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    
    if (dstsize > destnow)
        return (ft_strlen(source) + destnow);
    return (0);
}