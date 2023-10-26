/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:41:57 by abakhaev          #+#    #+#             */
/*   Updated: 2023/10/26 14:28:57 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t little_len;
    

    if(!big && !len)
        return(NULL);
    if (!*little)
        return ((char *)big);
    i = 0;
    little_len = ft_strlen(little);
    if (little_len == 0) // Cas où little est vide
        return (char *)big;

    while (big[i] != '\0' && i + little_len <= len)
    {   
        if (ft_strncmp(big + i, little, little_len) == 0)
            return ((char *)big + i);
        i++;
    }

    return (NULL);
}
	
// int main() 
// {
//     printf("%s", ft_strnstr("Salut comment sa va", "comment", 4));
//     return 0;
// }


	
	
	
	
	
													
	
	
	

	
		
		
				



