/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:03:45 by zeayverd          #+#    #+#             */
/*   Updated: 2025/05/29 18:13:38 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_isdigit(int c)
{
    if(c >= 48 && c <= 57)
    {
        return (1);
    }
    else
        return (0);
}

int main()
{
    printf("%d", ft_isdigit('3'));
    printf("%d", ft_isdigit('a')); 
}