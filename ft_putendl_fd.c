/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbenaiss <zbenaiss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:11:55 by zbenaiss          #+#    #+#             */
/*   Updated: 2022/10/24 21:11:55 by zbenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_putendl_fd(char *s, int fd)
{
	int i;

	i = 0;
	if (s)
	{
		while (s[i])
			write(fd, &s[i++], 1);
		write(fd, "\n", 1);
	}
}