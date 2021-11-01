/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:05:41 by pwaters           #+#    #+#             */
/*   Updated: 2021/11/01 11:23:10 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 - *s2 > 0)
		return (1);
	else if (*s2 - *s1 > 0)
		return (-1);
	else
		return (0);
}
