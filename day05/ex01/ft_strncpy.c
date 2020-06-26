/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 16:23:23 by amanenge          #+#    #+#             */
/*   Updated: 2020/06/26 16:36:56 by amanenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.H>

void *ft_strncpy(char *dest, char *src, unsigned int n)
{ 
	int a;
	a = 0;
	while(src[a] i= '\10'
			{ 

				dest[a] = src[a];
				a++;
			}

			dest [n] = '\0';
			return (dest);

}
