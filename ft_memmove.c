/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlin-zho <zlin-zho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:31:58 by zlin-zho          #+#    #+#             */
/*   Updated: 2024/03/16 18:21:39 by zlin-zho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *texto, const void *source, int l)
{
	char		*txt;
	const char	*src;
	int			n;

	txt = (char *) texto;
	src = (char *) source;
	if (src > txt)
	{
		n = l;
		while (n > 0)
		{
			txt[n] = src[n];
			n--;
		}
	}
	else
	{
		n = 0;
		while (n < l)
		{
			txt[n] = src[n];
			n++;
		}
	}
}
