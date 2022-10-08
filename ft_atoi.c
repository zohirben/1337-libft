#include "libft.h"

int ft_atoi(const char *str)
{
    int operator;
    int i;
    int number;

    i = 0;
    number = 0;
    operator = 0;
    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    while(str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            operator++;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        number *= 10;
        number += (str[i] - 48);
        i++;
    }
    if(operator % 2 == 0)
        return (number);
    return (-number);
}

int main ()
{
    char str[] = "-123324342342334";
    printf("%i\n", ft_atoi(str));
    printf("%i\n", atoi(str));
}