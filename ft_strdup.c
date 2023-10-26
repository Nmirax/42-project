/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:25:51 by abakhaev          #+#    #+#             */
/*   Updated: 2023/10/26 11:57:50 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_strcpy(char *dest, const char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}


char *ft_strdup(const char *s)
{

char *dp;

dp = ft_calloc(ft_strlen(s) +1,sizeof(char));
	if(!dp)
	return(NULL);
	
	 ft_strcpy(dp,(char*)s);
	return(dp);

	
}