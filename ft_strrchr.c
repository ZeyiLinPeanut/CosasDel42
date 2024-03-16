/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlin-zho <zlin-zho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:49:45 by zlin-zho          #+#    #+#             */
/*   Updated: 2024/03/16 14:35:25 by zlin-zho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char* ft_strchr(char* txt, int l)
{
    char* m;
    while(*txt != '\0')
    {
        if(*txt == l)
            m = *txt;
        txt++;
    }

    if(l == '\0')
        return 0;
    else
        return m;
}