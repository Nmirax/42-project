/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:52:57 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/14 19:54:24 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	result = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			result = (char *)s;
		s++;
	}
	if (*s == (char)c)
		result = (char *)s;
	return (result);
}

// int main()
// {
//     char str[] = "Hello, World!";
//     char c = 'a';

//     char *result = ft_strrchr(str, c);

//     if (result != NULL)
//         printf("Le caractere %c est trouve  : %ld\n", c, result - str);
//     else
//         printf("Le caractere %c n'est pas trouve dans la chaine\n", c);

//     return 0;
// }