/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 16:32:11 by zeayverd          #+#    #+#             */
/*   Updated: 2025/05/31 20:12:28 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strchr(const char *s, int c)
{
	char *tmp;
	tmp = (char *) s;
	int i;
	i = 0;

	while(tmp[i])
	{
		if(tmp[i] == c)
		{
			return (tmp + i);
		}
		i++;
	}
	return (NULL);
}

int main()
{
	printf("%s", ft_strchr("rana", 'a'));
}