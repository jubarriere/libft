/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julbarri <julbarri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:17:43 by julbarri          #+#    #+#             */
/*   Updated: 2026/11/20 01:20:15 by julbarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	char	*os;
	size_t	i;

	ch = (char)c;
	os = (char *)s;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return (&os[i]);
		i++;
	}
	if (s[i] == ch)
		return (&os[i]);
	return (NULL);
}
