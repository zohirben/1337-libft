/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbenaiss <zbenaiss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:12:49 by zbenaiss          #+#    #+#             */
/*   Updated: 2022/10/25 22:54:15 by zbenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if ((start+len) > ft_strlen(s))
		len = ft_strlen(s) - start;
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// { badredinesouhar  
//     char *str;
//     str = ft_substr("No More Bite No Bark", 18, 4);
//     printf("%s", str);
// }
