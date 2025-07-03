/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 16:32:11 by zeayverd          #+#    #+#             */
/*   Updated: 2025/07/02 14:27:15 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;
	int		i;

	tmp = (char *) s;
	i = 0;
	while (tmp[i])
	{
		if (tmp[i] == (char) c)
		{
			return (tmp + i);
		}
		i++;
	}
	if (tmp[i] == (char)c)
		return (tmp + i);
	return (0);
}
