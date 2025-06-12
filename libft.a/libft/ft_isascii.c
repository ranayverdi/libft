/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:25:30 by zeayverd          #+#    #+#             */
/*   Updated: 2025/05/29 18:33:49 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_isascii(int c)
{
    if( c >= 0 && c <= 127)
    {
        return(1);
    }
    else
        return(0);
}

int main()
{
    printf("%d", ft_isascii('3'));
    printf("%d", ft_isascii(128)); 
}

