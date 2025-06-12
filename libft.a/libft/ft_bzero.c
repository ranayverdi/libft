/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:34:11 by zeayverd          #+#    #+#             */
/*   Updated: 2025/06/12 13:47:06 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
	unsigned char *tmp;
	tmp = (unsigned char*)s;
	int i;
	n = 3;
	i = 0;
	while(i < n)
	{
		*tmp = '\0';
		tmp++;
		i++;
	}
}

//int main()
//{
	//char s[] = "rana";
	//ft_bzero(s,4);
//	printf("%c", s[1]);
//}

