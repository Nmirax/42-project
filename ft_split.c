/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:45:34 by abakhaev          #+#    #+#             */
/*   Updated: 2023/10/29 17:46:36 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/******************COMPTER LE NOMBRE DE MOT*************************/
static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}
/*********************ADD MEMORY TO TABLEAU***********************/

char **ft_split(char const *s,char c)
{
	char **tableau; //stock les mots
	int	j; //ping first world
	int i; //parcoure chaine	
	int k; //parcoure tableau
	
	if(!s)
		return (NULL);
	if (!(tableau = (char **)ft_calloc((ft_count_words(s, c) + 1), sizeof(char *))))
		return(NULL);
		
	i = 0;
	k = 0;
	while (s[i])
	{
		while(s[i] == c)
			i++;
		if (s[i])
	{
		j = i;
	/******************DIVISE LA CHAINE EN MOT AND ADD TO TABLEAU********************/
	
		while (s[i] && s[i] != c)
			i++;
		if (!(tableau[k] = ft_substr(s, j, i -j)))
		{
			while (k >= 0)
				free(tableau[k--]);
			free(tableau);
return (NULL);
		}
		k++;
	}
	}
	tableau[k] = NULL;
	return (tableau);
}