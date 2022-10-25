#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char *arr = NULL;
	int j;
	

	i = 0;
	j = ft_strlen(s);
	while (i <= j)
	{
		if (((char *)s)[i] == (char)c)
			arr = ft_strchr(&s[i],c);
		i++;
	}
	return (arr);
}
// int main()
// {
//     char	*src = "";
//     char	*d1 = strrchr(src, '\0');
//     char	*d2 = ft_strrchr(src, '\0');

//     printf("strchr: %s\n",d1);
//     printf("ft_strrchr: %s",d2);
// }
