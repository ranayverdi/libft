/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:53:14 by zeayverd          #+#    #+#             */
/*   Updated: 2025/07/02 14:26:53 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*tmp;
	char	c1;
	size_t	i;

	tmp = (char *) s;
	c1 = (char) c;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == c1)
		{
			return (&tmp[i]);
		}
		i++;
	}
	return (NULL);
}
