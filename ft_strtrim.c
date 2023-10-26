/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:05:41 by abakhaev          #+#    #+#             */
/*   Updated: 2023/10/26 16:36:40 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    char *new_str;

    if (!s1 || !set)
        return NULL;

    start = 0;
    while (s1[start] && strchr(set, s1[start]))
        start++;

    end = strlen(s1);
    while (end > start && strchr(set, s1[end - 1]))
        end--;

    new_str = malloc(end - start + 1);
    if (!new_str)
        return NULL;

    strncpy(new_str, &s1[start], end - start);
    new_str[end - start] = '\0';

    return new_str;
}