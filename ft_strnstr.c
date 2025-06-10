/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:11:04 by zeayverd          #+#    #+#             */
/*   Updated: 2025/06/10 17:15:54 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <unistd.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	
	if(needle[0] == 0)
	{
		return ((char *) haystack);
	}
	while (haystack[i] && i < len)
	{
		while(haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
		{
			j++;
			if(needle[j] == 0)
				return ((char *) haystack + i);
		}
		i++;
		j = 0;
	}
	return (0);
}

int main()
{
	const char *m = " ";
	const char *s = "world";
	size_t n = 12;

	printf("%s", ft_strnstr(m, s, n));
}