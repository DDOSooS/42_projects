/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:12:14 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/01 23:49:21 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_del(char del, char c)
{
    if (del == c)
        return (1);
    return (0);
}

int ft_count_words(char del, char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i]!= '\0')
    {
        if (is_del(del,str[i]))
        {
            count++;
            while (is_del(del,str[i]))
                i++;
        }
        i++;
    }
    return (count);
}

int ft_world_len(char *str, char del)
{
    int i;
    int len;

    i = 0;
    len = 0;
    while (str[i]!= '\0')
    {
        if (is_del(del,str[i]))
        {
            len++;
            while (is_del(del,str[i]))
                i++;
        }
        i++;
    }
    return (len);
}
char **ft_split(char const *s, char c)
{
    int     i;
    int     j;
    char    **words;
    int     k;
     
    i = 0;
    k = 0;
    words = (char **)malloc(sizeof(char *) * (ft_count_words(c, s) + 1));
    if (!words)
        return (NULL);
    while (is_del(str[i], c))
        i++;
    while (s[i]!= '\0')
    {
        j = 0; 
        words[k] = malloc(ft_world_len(&s[i]));
        while (!is_del(str[i]))
            words[k][j++] = str[i++];
        words[k][j] = '\0';
        while (str[i] && is_del(str[i]))
            i++;
        k++;
    }
    words[k] = NULL;
    return (words);
}