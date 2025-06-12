/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:33:47 by zeayverd          #+#    #+#             */
/*   Updated: 2025/06/10 16:50:40 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *tmp1;
	unsigned char *tmp2;

	tmp1 = (unsigned char *) s1;
	tmp2 = (unsigned char *) s2;
	int i;
	i = 0;

	while(tmp1 != NULL || tmp2 != NULL && i < n)
	{
		if(tmp1[i] == tmp2[i])
		{
			i++;
		}
		if(tmp1[i] > tmp2[i] || tmp1[i] < tmp2[i])
		{
			return(tmp1[i] - tmp2[i]);
		}
	}
	return (0);
}

int main()
{
	const void s1[] = "eren";
	const void s2[] = "eren";
	size_t n = 4;
	printf("%d", ft_memcmp(s1, s2, n));
}