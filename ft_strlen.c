/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 20:35:28 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/16 22:48:27 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlen(const char *s)
{
	size_t	i;
	i = 0;
	
	while(s[i])
		i++;
	return (i);
	
}
int	 main (void)

{
	printf ("%zu\n", ft_strlen ("maricarmen"));
return (0);
}