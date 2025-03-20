/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alphabet.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 13:06:45 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/20 13:19:28 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alphabet(void)
{
	char c;
	c = 'a';
	
	while (c <= 'z')
		write (1, &c, 1);
		c++;
		
return (0);
}
int main (void)
{
alphabet;
return (0);

}