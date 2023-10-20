/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:11:14 by abakhaev          #+#    #+#             */
/*   Updated: 2023/10/19 18:18:30 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strlen(const char *s)
{
int i;
i = 0;
	
	while(s[i] != '\0')
		i++;
	return (i);
}	
size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest + i + j));
}

// #include <bsd/string.h>
// int main()
// {
// char src[] = "Hell164";
// char dest[]="bonjour";
// size_t size = 20;
// ft_strlcat(dest, src,size);
// printf("%zu\n", ft_strlcat(src,dest,size));
// char a[]="Hell164";
// char b[] ="bonjour";
// printf("%zu\n",strlcat(a,b,size));
// return 0;
// }
	

