/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:13:50 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/13 12:20:13 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	tolower (int c)
{
	if (c >= 65 && c<= 90)
		return (c + 32);
	return (c);	
}
int main (void)
{
	printf ("%c\n", tolower ('P'));
}