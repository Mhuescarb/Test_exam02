/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 22:24:50 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/16 22:47:01 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlcat(char *dest, const char *src, size_t size)

{
	size_t	dest_len;
	size_t	src_len;
	
	dest_len = 0;
	src_len = 0;

	while (dest_len < size && dest [dest_len])
		dest_len++;
	
	while (src[src_len])
		src_len++;
	


	if (dest_len == size)
		return (size + src_len);
		
	size_t i;
	i = 0;

	while (src [i] && (dest_len + i) < size -1)
	{
		dest[dest_len + i]  = src [i];
		i++;
		
	}
	
	if (dest_len + i < size)
	
		dest[dest_len + i ] = '\0';
return (dest_len + src_len);
	
}
int main() {
    char dest[30] = "Hola";
    const char *src = ", mundo gatuno!";
    size_t size = sizeof(dest);

    size_t result = ft_strlcat(dest, src, size);

    printf("Destino: \"%s\"\n", dest);
    printf("Longitud esperada: %zu\n", result);

    return 0;
}
