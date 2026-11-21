/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julbarri <julbarri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:50:43 by julbarri          #+#    #+#             */
/*   Updated: 2026/11/07 14:41:25 by julbarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*udest;
	const unsigned char	*usrc;
	size_t				i;

	if (src == NULL && dest == NULL)
		return (NULL);
	usrc = (unsigned char *)src;
	udest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		udest[i] = usrc[i];
		i++;
	}
	return (dest);
}
