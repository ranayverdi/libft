/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:55:50 by zeayverd          #+#    #+#             */
/*   Updated: 2025/07/02 14:26:58 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tmpdst;
	char	*tmpsrc;
	size_t	i;

	tmpdst = (char *) dst;
	tmpsrc = (char *) src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	while (i < n)
	{
		*tmpdst = *tmpsrc;
		tmpdst++;
		tmpsrc++;
		i++;
	}
	return (dst);
}
