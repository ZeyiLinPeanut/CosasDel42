/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlin-zho <zlin-zho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:40:40 by zlin-zho          #+#    #+#             */
/*   Updated: 2024/03/16 18:10:13 by zlin-zho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memcmp(const void *sorce1, const void *source2, int n)
{
	unsigned int		m;
	unsigned const char	*s1;
	unsigned const char	*s2;

	s1 = (unsigned const char) sorce1;
	s2 = (unsigned const char) source2;
	m = 0;
	while (m < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		m++;
	}
	return (0);
}
