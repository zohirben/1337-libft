#include "libft.h"

int ft_isdigit(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}