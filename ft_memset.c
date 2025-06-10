/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:16:45 by zeayverd          #+#    #+#             */
/*   Updated: 2025/06/10 14:53:44 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
	char *tmp;
	tmp = (char *)b;
	int i;z
	i = 0;
	while (i < len)
	{
		*tmp = c;
		tmp++;
		i++;
	}
	return b;
}

int main(void)
{
	int sayi[5] = {10, 11, 12, 13, 14};
	int i;

	i = 0;
	ft_memset(sayi, 30, 7);
	ft_memset(sayi, 132, 6);
	ft_memset(sayi, 128, 5);
	ft_memset(sayi, 0, 4);
	ft_memset(sayi, 10, 3);

	while (i < 5)
	{
		
		printf("%d\n", sayi[i]);
		i++;
	}
	




	//ft_memset(&sayi[0], 10, 1);
	//ft_memset(&sayi[1], 23, 1);
	//ft_memset(sayi, 192, 1);
/* 	ft_memset(sayi, 0, 4);
	ft_memset(sayi, 1, 3);
	ft_memset(sayi, 0, 2); */
	//printf("%d\n",sayi[1]);
	

}