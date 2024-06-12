/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdiez <vdiez@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:24:03 by vdiez             #+#    #+#             */
/*   Updated: 2024/06/12 19:01:09 by vdiez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	iterator;

	iterator = 0;
	while (src[iterator] != '\0' && iterator <= (size - 1))
	{
		dest[iterator] = src[iterator];
		iterator++;
	}
	dest[iterator] = '\0';
	return (iterator);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[] = "Hola, 42";
	char dest[10];
	unsigned int size = 10;
	
	printf("Frase original: %s\n", src);
	ft_strlcpy(dest, src, size);
	printf("Frasse en destino: %s\n", dest);
	printf("Longitud: %u\n", ft_strlcpy(dest, src, size));
	return (0);
}*/
