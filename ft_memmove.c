/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julbarri <julbarri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:52:06 by julbarri          #+#    #+#             */
/*   Updated: 2026/11/18 22:57:33 by julbarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*usrc;
	unsigned char		*udest;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	udest = (unsigned char *)dest;
	usrc = (unsigned char *)src;
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			udest[n] = usrc[n];
		}
	}
	return (dest);
}
