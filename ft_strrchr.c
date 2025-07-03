/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 20:17:37 by zeayverd          #+#    #+#             */
/*   Updated: 2025/07/02 14:27:31 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	int		i;

	tmp = (char *) s;
	i = ft_strlen((const char *) s);
	while (i >= 0)
	{
		if (tmp[i] == (char) c)
		{
			return (tmp + i);
		}
		i--;
	}
	return (0);
}
