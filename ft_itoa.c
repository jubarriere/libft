/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julbarri <julbarri@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:58:39 by julbarri          #+#    #+#             */
/*   Updated: 2026/11/18 22:46:49 by julbarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbr_len(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		sign;
	long	nb;
	int		len;

	nb = n;
	sign = 0;
	len = ft_nbr_len(nb);
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
		sign = 1;
	}
	result[len] = '\0';
	while (len > sign)
	{
		result[len - 1] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	return (result);
}
