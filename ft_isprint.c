/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:34:17 by zeayverd          #+#    #+#             */
/*   Updated: 2025/06/10 15:17:32 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
    {
        return (1);
    }
    else
        return (0);
}

int main()
{
    printf("%d", ft_isprint('3'));
    printf("%d", ft_isprint(127)); 
}