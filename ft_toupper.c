/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 19:16:39 by zeayverd          #+#    #+#             */
/*   Updated: 2025/05/30 19:20:25 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		return(c - 32);
	}
	return (c);
}

int main()
{
	int c = 'm';
	printf("%c", ft_toupper(c));
}