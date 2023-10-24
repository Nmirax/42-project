/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:14:32 by abakhaev          #+#    #+#             */
/*   Updated: 2023/10/21 12:22:27 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;

    if (size == 0)
        return (ft_strlen(src));
    i = 0;
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
        return (ft_strlen(src));
}


// int main()
// {
// char src[] = "Hell164";
// char dest[3];
// ft_strlcpy(dest, src,40);
// printf("%s",dest);
// }