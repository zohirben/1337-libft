#include "libft.h"

// void    ft_achanger(unsigned int x, char *cptr)
// {
//     *cptr+=x;
// }

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    int i;

    i = 0;
    if (s)
    {
        while (s[i])
        {
            (*f)(i, &s[i]);
            i++;
        }
    }
}

// int main()
// {
//     char str[] = "Hello World";
//     ft_striteri(str, ft_achanger);
//     printf("%s\n", str);
// }