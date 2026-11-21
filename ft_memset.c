/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julbarri <julbarri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:46:26 by julbarri          #+#    #+#             */
/*   Updated: 2026/11/06 16:50:59 by julbarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*us;
	size_t			i;

	uc = (unsigned char)c;
	us = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		us[i] = uc;
		i++;
	}
	return (s);
}
