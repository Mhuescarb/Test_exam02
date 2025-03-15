/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 20:49:24 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/15 22:08:43 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size) 
{
	size_t	i;
	i = 0;

if (size > 0)
{
	while (i < size -1 && src[i] != '\0')
	{
		dest [i] = src [i];
	i++;
	}
}
	dest[i] = '\0';
	 while (src[i] != '\0')
		i++;
	return (i);
}
int main()
 {
	char dest[10];
	const char *src = "Hola, mundo!";
	size_t size = ft_strlcpy(dest, src, sizeof(dest));

	printf("Destino: \"%s\"\n", dest);
	printf("Longitud de src: %zu\n", size);

	return 0;
}