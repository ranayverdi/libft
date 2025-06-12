/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:27:46 by zeayverd          #+#    #+#             */
/*   Updated: 2025/05/30 18:30:32 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *tmpdest;
	char *tmpsrc;
	tmpdest = (char *) dst;
	tmpsrc = (char *) src;
	int i;
	i = 0;
	if((char *) dst == NULL || (char *)src == NULL)
	{
		return (NULL);
	}
	else if (dst < src)
	{
		while (i < len)
		{
			tmpdest[len] = tmpsrc[len];
			i++;
		}
	}
	else if (dst > src)
	{
		while (len--)
			tmpdest[len] = tmpsrc[len];
	}
	// tmpdest[len] = '\0';
	return (tmpdest);
	
}

int main()
{
	 char dst[] = "12345678";
	 
	 size_t n = 3;
	 ft_memmove(dst + 2, dst, n);
	 printf("%s", dst + 2);
}