/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 18:54:28 by zeayverd          #+#    #+#             */
/*   Updated: 2025/05/27 19:12:08 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_isalpha(int c)
{
    if(c >= 'a' && c <= 'z')
    {
        return 1;
    }
    else if(c >= 'A' && c <= 'Z')
    {
        return 1;
    }
    else;
        return 0;
}

int main()
{   int c = 'a';
    printf("%d", ft_isalpha(c));
}
