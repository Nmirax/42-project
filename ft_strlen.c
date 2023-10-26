/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:26:58 by abakhaev          #+#    #+#             */
/*   Updated: 2023/10/25 14:58:20 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
int i;
i = 0;
	
	while(s[i] != '\0')
		i++;
	return (i);
}	

/*
int main(void)
{
	printf("%d",ft_strlen("Helloooo"));
}
*/
