/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeayverd <zeayverd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 19:56:07 by zeayverd          #+#    #+#             */
/*   Updated: 2025/07/02 14:27:13 by zeayverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_words(const char *s, char c)
{
	int	i;
	int	count;
	int	word;

	i = 0;
	count = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] == c)
			word = 0;
		else if (word == 0)
		{
			word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static	void	free_all(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free (split[i]);
		i++;
	}
	free (split);
}

static	char	**ft_put_str(char **arr, char c, const char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*s)
	{
		while (s[j] && s[j] == c)
			j++;
		s += j;
		if (*s)
		{
			j = 0;
			while (s[j] && s[j] != c)
				j++;
			arr[i] = ft_substr(s, 0, j);
			i++;
		}
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	int		count;

	count = count_words(s, c);
	arr = malloc(sizeof (char *) * (count + 1));
	if (!arr)
		return (NULL);
	arr = ft_put_str(arr, c, s);
	if (!arr)
		free_all(arr);
	return (arr);
}
