/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:42:36 by zeayverd          #+#    #+#             */
/*   Updated: 2025/06/10 14:38:50 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	size_t i;
	
	i = 0   ;
	while(s[i] != '\0')
	{
		i++;
	}
	return(i);
}

//int main()
//{
//	const char s[] = "naber";
//	printf("%ld", ft_strlen(s)); 
//}