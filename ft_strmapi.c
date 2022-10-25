/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbenaiss <zbenaiss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:12:19 by zbenaiss          #+#    #+#             */
/*   Updated: 2022/10/24 21:12:19 by zbenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char ft_crypt(unsigned int key, char c)
// {
//     return (c+=key);
// }

// char ft_decrypt(unsigned int key, char c)
// {
//     return (c-=key);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*str;

	if (!s)
		return (0);
	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc((len + 1));
	if (!str)
		return (0);
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
//     const char *s = "Hello World";
//     char *str;
//     str = ft_strmapi(s, ft_crypt);
//     printf("%s\n", str);
//     str = ft_strmapi(str, ft_decrypt);
//     printf("%s\n", str);
// }