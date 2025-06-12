/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 19:31:04 by zeayverd          #+#    #+#             */
/*   Updated: 2025/05/30 19:32:24 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_tolower(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return(c + 32);
	}
	return (c);
}

int main()
{
	int c = 'M';
	printf("%c", ft_tolower(c));
}