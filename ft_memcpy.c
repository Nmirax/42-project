/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:02:53 by abakhaev          #+#    #+#             */
/*   Updated: 2023/10/19 18:23:21 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned int i;

    i = 0;
    if (!dest && !src)
    return (NULL);
    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }

    return(dest);
}
// int main()
// {
//     unsigned char dest[] = "Hakuna";
// 	unsigned char src[] = "Mtatta";
// 	printf("%s", (unsigned char *)ft_memcpy(src,dest,13));
// }