#include "libft.h"

int ft_isdigit(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}