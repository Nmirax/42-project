/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:35:56 by abakhaev          #+#    #+#             */
/*   Updated: 2023/10/16 18:01:25 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_isdigit(int c)
{
    if(c >= 48 && c <= 57)
        return (1);
    return 0;
}