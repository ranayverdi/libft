/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 18:26:36 by zeayverd          #+#    #+#             */
/*   Updated: 2025/06/12 18:47:53 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *tmp;
	tmp = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!tmp)
		return (NULL);
	int i;
	i = 0;
	int j;
	j = 0;
	
	if(!s1 || !s2)
	{
		return (NULL);
	}
	while(s1[i])
	{
		tmp[i] = s1[i];
		i++;
	}
	while(s2[j])
	{
		tmp[i + j] = s2[j];
		j++;
	}
	tmp[i + j] = '\0';
	return (tmp);
}
#include <stdio.h>

int main()
{
	char const *s1 = "merhaba";
	char const *s2 = "dunya";
	printf("%s", ft_strjoin(s1, s2));
}