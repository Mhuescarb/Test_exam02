/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 20:35:28 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/20 12:49:15 by mhuescar         ###   ########.fr       */
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

size_t xtrelen (const char*)

size_t i;
i = 0;

while (s[i])
	i++;
return (i);


int main (void)

printf %zu (xtrelen ("maricarmen"))
return (0)