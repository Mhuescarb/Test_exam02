/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:37:28 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/13 12:12:38 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	toupper(int c )
{
	if( c>= 97 & c <=122)
		return (c -32);
	return (c);
}
int main (void)
{
	printf ("%c\n", toupper('b'));
}