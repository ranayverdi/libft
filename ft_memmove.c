/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:27:46 by zeayverd          #+#    #+#             */
/*   Updated: 2025/07/02 14:27:00 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*tmpdest;
	unsigned char		*tmpsrc;
	size_t				i;

	tmpsrc = (unsigned char *) src;
	tmpdest = (unsigned char *) dst;
	i = 0;
	if (!dst && !src)
	{
		return (0);
	}
	else if (dst < src)
	{
		while (i < len)
		{
			tmpdest[i] = tmpsrc[i];
			i++;
		}
	}
	else if (dst > src)
		while (len--)
			tmpdest[len] = tmpsrc[len];
	return (tmpdest);
}
