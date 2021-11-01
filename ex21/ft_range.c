/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:44:40 by pwaters           #+#    #+#             */
/*   Updated: 2021/11/01 11:34:24 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	len;

	i = 0;
	len = max - min;
	if (min >= max)
		return (0);
	tab = malloc ((max - min) * sizeof(int));
	while (i < len)
	{
		tab[i] = min + i;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
