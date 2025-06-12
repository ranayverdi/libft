/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:55:50 by zeayverd          #+#    #+#             */
/*   Updated: 2025/05/30 19:52:02 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	char *tmpdst;
	char *tmpsrc;
	tmpdst = (char *) dst;
	tmpsrc = (char *) src;
	int i;
	i = 0;
	
	if((char *) dst == NULL || (char *) src ==  NULL)
	{
		return (dst);
	}
	while(i < n)
	{
		*tmpdst = *tmpsrc;
		tmpdst++;
		tmpsrc++;
		i++;
	}
	return (dst);
}

int main()
{
	char dst[] = "rana";
	char src[] = "";
	size_t n = 3;
	ft_memcpy(dst, src, n);
	printf("%s", dst);
}