/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:30:05 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/13 10:40:44 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalpha(int c)
{
if (c>= 65 && c<=90 ||c>=97 && c<=122)
	return (1);
return (0);
}


int main()
{
	printf("%d\n", ft_isalpha('4'));
}