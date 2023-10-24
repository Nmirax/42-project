/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:21:31 by abakhaev          #+#    #+#             */
/*   Updated: 2023/10/21 13:55:40 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    if (n != '\0')
        while (n--)
            if (*(unsigned char *)s++ == (unsigned char)c)
                return ((void *)(unsigned char *)s - 1);
    return (NULL);
}



// du coup elle cherche le premier int quil rencontre mais linterprete comme char probablement  le convertir tous sa dans un bloc 
// memoire on doit aussi preciser au block memoire ou faire sa recherche

// *s = un pointeur indiquant l'adresse du bloc mémoire à utiliser pour la recherche
// int c = le code numérique de l'octet à rechercher dans le bloc
// size_t n = indique la taille du bloc de mémoire dans lequel opérer la recherche