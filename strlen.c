/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 20:35:28 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/15 20:43:24 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t strlen(const char *s)
{
	size_t	i;
	i = 0;
	
	while(s[i])
		i++;
	return (i);
	
}
int	 main (void)

{
	printf ("%zu\n", strlen ("maricarmen"));
return (0);
}