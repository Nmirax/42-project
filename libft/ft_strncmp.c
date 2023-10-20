/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:14:00 by abakhaev          #+#    #+#             */
/*   Updated: 2023/10/19 18:18:18 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;

    if (n == 0)
        return 0;

    while(s1[i] != '\0' && s2[i] != '\0' && n > i)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}

// int main(void)
// {
//      char s2[] = "Hakuna";
//      char s1[] = "Mtatta";
//     printf("%d", ft_strncmp(s2,s1,5));
//     printf("%d", strncmp(s2,s1,5));
// }