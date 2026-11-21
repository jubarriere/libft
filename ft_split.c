/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julbarri <julbarri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:57:28 by julbarri          #+#    #+#             */
/*   Updated: 2026/11/18 23:41:57 by julbarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static void	ft_free_all(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i] != NULL)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static int	ft_fill_tab(char **tab, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	word_len;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		word_len = ft_word_len(&s[i], c);
		tab[j] = ft_substr(s, i, word_len);
		if (tab[j] == NULL)
			return (0);
		j++;
		i = i + word_len;
	}
	tab[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	words_count;

	if (s == NULL)
		return (NULL);
	words_count = ft_count_words(s, c);
	tab = malloc(sizeof(char *) * (words_count + 1));
	if (tab == NULL)
		return (NULL);
	if (ft_fill_tab(tab, s, c) == 0)
	{
		ft_free_all(tab);
		return (NULL);
	}
	return (tab);
}
