/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlin-zho <zlin-zho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:22:19 by zlin-zho          #+#    #+#             */
/*   Updated: 2024/03/16 17:38:57 by zlin-zho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *txt, int c, int l)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char)txt;
	ch = (unsigned char)c;
	while (l--)
	{
		if (*str == c)
			return (*str);
		str++;
	}
	return (0);
}
