/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlin-zho <zlin-zho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:01:47 by zlin-zho          #+#    #+#             */
/*   Updated: 2024/03/16 19:08:06 by zlin-zho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_memset(void *txt,int c,int   m)
{
    int n;
    n = 0;

    while(txt[n] != '\0' && m > n)
    {
        txt[n] = l;
        n++;
    }

    return txt;
}