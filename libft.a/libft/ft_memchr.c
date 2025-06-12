/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:53:14 by zeayverd          #+#    #+#             */
/*   Updated: 2025/06/10 16:45:11 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	 char *tmp;
	 tmp = (char *) s;
	 int i;
	 i = 0;

	 while(tmp && i < n)
	 {
		if(tmp[i] == c)
		{
			return (&tmp[i]);
		}
		i++;
	 }
	 return (NULL);
}

int main(void)
{
		const void *s = "hello";
		int c = 'l';
		size_t n = 4;

		printf("%s", ft_memchr(s, c, n));
}