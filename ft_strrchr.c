/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 20:17:37 by zeayverd          #+#    #+#             */
/*   Updated: 2025/06/10 14:41:28 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"


char *ft_strrchr(const char *s, int c)
{
	char *tmp;
	tmp = (char *) s;
	int i = ft_strlen((const char *) s);

	while(i != 0)
	{
		if(tmp[i] == c)
		{
			return (tmp + i);
		}
		i--;
	}
	return (NULL);
}

int main()
{

	printf("%s", ft_strrchr("rana", 'a'));
}