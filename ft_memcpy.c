/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlin-zho <zlin-zho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:16:54 by zlin-zho          #+#    #+#             */
/*   Updated: 2024/03/16 17:40:24 by zlin-zho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, int n)
{
	char		*cdst;
	const char	*csrc;
	int			i;

	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}
