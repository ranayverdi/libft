/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:27:59 by zeayverd          #+#    #+#             */
/*   Updated: 2025/06/12 14:16:19 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	unsigned char *tmp;
	tmp = (unsigned char *) malloc(count * size);
	
	ft_bzero(tmp, count * size);
	return(tmp);
}

int main()
{
	int *i = ft_calloc(2, 4);
	printf("%d\n", i[0]);
}