/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbenaiss <zbenaiss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:12:23 by zbenaiss          #+#    #+#             */
/*   Updated: 2022/10/25 20:12:00 by zbenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	*sub;

	str = (char *)haystack;
	sub = (char *)needle;
	i = 0;
	j = 0;
	if (*sub == '\0')
		return (str);
	while (i < len && str[i])
	{
		j = 0;
		while (str[i + j] == sub[j] && sub[j] && (j + i) < len)
		{
			j++;
		}
		if (sub[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

// int main()
// {
//     char str[] = "";
//     char sub[] = "coucou";
//     printf("%s\n", ft_strnstr(str, sub, -1));
//     printf("%s", strnstr(str, sub, -1));
// }