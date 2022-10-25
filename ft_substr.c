/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbenaiss <zbenaiss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:12:49 by zbenaiss          #+#    #+#             */
/*   Updated: 2022/10/24 21:12:49 by zbenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (0);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	if (start >= strlen(s))
		return (str);
	i = 0;
	while (i < len)
	{
		str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
//     char *str;
//     str = ft_substr("No More Bite No Bark", 18, 4);
//     printf("%s", str);
// }