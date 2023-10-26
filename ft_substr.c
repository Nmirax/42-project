/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:49:28 by abakhaev          #+#    #+#             */
/*   Updated: 2023/10/26 10:47:43 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlens(const char *s)
{
int i;
i = 0;
	
	while(s[i] != '\0')
		i++;
	return (i);
}	


char  *ft_strncpy(char *dest, char *src, unsigned int n)
{
  unsigned int i;

	i = 0;
	while (src[i] != '\0' && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}


char *ft_substr(char const *s, unsigned int start, size_t len)
 {
    if (!s)
        return (NULL);

    char *newstr;

    if (start >= ft_strlens(s)) 
	{
        start = 0;
        len = 0;
    }
    else if (len > ft_strlens(s) - start) 
	{
        len = ft_strlens(s) - start;
    }

    newstr = (char *) malloc(sizeof(char) * (len + 1));

    if (!newstr) {
        return (NULL);
    }

    ft_strncpy(newstr, (char *)s + start , len);

    newstr[len] = '\0';
    return (newstr);
}
