/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghergho <aghergho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:13:15 by aghergho          #+#    #+#             */
/*   Updated: 2023/11/01 17:06:08 by aghergho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    int        i;
    int        j;
    int        tlen;

    i = -1;
    j = -1;
    tlen = ft_strlen(s1) + ft_strlen(s2) + 1;
    str = (char *)malloc(sizeof(char) * tlen);
    if (!str)
        return (NULL);
    while (s1[++i]!= '\0')
        str[i] = s1[i];
    while (s2[++j]!= '\0')
        str[i + j] = s2[j];
    str[i + j] = '\0';
    return (str);
}

// #include <stdio.h>

// int    main(void)
// {
//     char    *str1 = "Hello";
//     char    *str2 = " World";
//     char    *str3 = ft_strjoin(str1, str2);

//     printf("%s\n", str3);
//     for (int i; i < 20;i++)
//     {
//         printf("%c", str3[i]);
//     }
//     free(str3);
//     return (0);
// }

