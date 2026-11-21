/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julbarri <julbarri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 18:28:01 by julbarri          #+#    #+#             */
/*   Updated: 2026/11/20 01:22:05 by julbarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*os;
	char	ch;
	int		i;
	int		size;

	ch = (char)c;
	os = (char *)s;
	size = ft_strlen(os);
	i = 0;
	while (i <= size)
	{
		if (s[size - i] == ch)
			return (&os[size - i]);
		i++;
	}
	return (NULL);
}
