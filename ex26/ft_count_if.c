/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:43:08 by pwaters           #+#    #+#             */
/*   Updated: 2021/11/01 11:51:31 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int(*f)(char*))
{
	int	n;
	int	i;

	i = 0;
	n = 0;
	while (tab[i] != ((char *)0))
	{
		if ((*f)(tab[i]) == 1)
			n++;
		i++;
	}
	return (n);
}
