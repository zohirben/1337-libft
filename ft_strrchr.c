#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int  i;
    
    i = 0;
    if(s[i] == '\0' )
        return (0);
    while(s[i])
    {
        if ((s[i] >= 32 && s[i] <= 126) || (s[i] >= 9 && s[i] <= 13))
            i++;
        else
            return (0);
    }
    i = ft_strlen(s) + 1;
    while(--i >= 0)
    {
        if (((char *)s)[i] == (char)c)
            return ((char *)(s+i));
    }
    return (0);
}
// int main()
// {
//     char	*src = "";
//     char	*d1 = strrchr(src, L'–');
//     char	*d2 = ft_strrchr(src, L'–');

//     printf("strchr: %s\n",d1);
//     printf("ft_strrchr: %s",d2);
// }
