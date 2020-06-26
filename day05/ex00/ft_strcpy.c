/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 15:15:58 by amanenge          #+#    #+#             */
/*   Updated: 2020/06/26 16:03:33 by amanenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void *ft_strcpy(char *dest, char  *src)
{
    int a;
	a = 0;
	while (src[a] != '\0')
	{
	   dest[a] = src[a];
	   a++;
	}
	dest[a] = '\0';
	return (dest);

}

