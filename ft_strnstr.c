/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julbarri <julbarri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:30:06 by julbarri          #+#    #+#             */
/*   Updated: 2026/11/07 21:34:00 by julbarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*obig;
	size_t	size_little;

	obig = (char *)big;
	size_little = ft_strlen(little);
	i = 0;
	if (little[i] == '\0')
		return (obig);
	while (obig[i] != '\0' && i < len)
	{
		j = 0;
		while (i < len && obig[i] == little[j] && little[j] != '\0')
		{
			j++;
			i++;
		}
		if (little[j] == '\0')
			return (&obig[i - size_little]);
		i = i - j + 1;
	}
	return (NULL);
}
