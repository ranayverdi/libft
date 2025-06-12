/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:04:13 by zeayverd          #+#    #+#             */
/*   Updated: 2025/06/12 18:24:50 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char *str;
	
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while(s[i])
	{
		if(i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

int main()
{
	char const s[10] = "hello";
	printf("%s", ft_substr(s, 3, 2));
}