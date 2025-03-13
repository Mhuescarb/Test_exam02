/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:14:52 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/13 11:35:04 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii (int c)
{
	if (c >=0 && c<=127)
		return(1);
	return (0);
}
int	main (void)
{
	printf("%d\n", ft_isascii (128));// comillas simples para char, dobles para string y nada para valor num
	return (0);
}