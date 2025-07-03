/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:09:44 by zeayverd          #+#    #+#             */
/*   Updated: 2025/07/02 14:26:51 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(int n)
{
	long	num;
	int		count;

	num = n;
	count = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	int		is_negative;
	long	num;

	count = digit_count(n);
	is_negative = (n < 0);
	num = n;
	if (is_negative)
		count++;
	str = malloc(count + 1);
	if (!str)
		return (0);
	str[count] = '\0';
	if (is_negative)
		num = -num;
	while (count > 0)
	{
		count--;
		str[count] = (num % 10) + '0';
		num /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}
