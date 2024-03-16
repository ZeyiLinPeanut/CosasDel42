/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlin-zho <zlin-zho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 10:26:07 by zlin-zho          #+#    #+#             */
/*   Updated: 2024/03/16 16:31:40 by zlin-zho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char l)
{
	if (l >= '0' && l <= '9')
	{
		if ((l >= 'A' && l <= 'Z') || (l >= 'a' && l <= 'z'))
			return (1);
		else
			return (0);
	}
}