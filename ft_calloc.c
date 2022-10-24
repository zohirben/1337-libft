/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbenaiss <zbenaiss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:19:37 by zbenaiss          #+#    #+#             */
/*   Updated: 2022/10/24 20:19:37 by zbenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    size_t  i;
    char    *str;

    i = 0;
    str = (char *) malloc(count * size);
    if (!str)
        return (0);
    while(i < (count * size))
    {
        str[i++] = '\0';
    }
    return (str);
}

// int main()
// {
//     char *str = ft_calloc(212, sizeof(char));
//     str = memcpy(str, "Helloererserso3", 5);
//     printf("%s\n", str);
//     free(str);
//     printf("%s",str);
// }