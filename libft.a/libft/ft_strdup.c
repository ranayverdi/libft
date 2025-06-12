/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:18:02 by zeayverd          #+#    #+#             */
/*   Updated: 2025/06/12 14:33:56 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"


char *ft_strdup(const char *s1)
{
	char *tmp;
	tmp = malloc(ft_strlen(s1) + 1);
	int i;
	i = 0;
	
	while(s1[i])
	{
		tmp[i] = s1[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

int main()
{
	char *tmp = "merhaba";

	printf("%s", ft_strdup(tmp));
}