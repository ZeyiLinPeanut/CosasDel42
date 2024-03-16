/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlin-zho <zlin-zho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:48:24 by zlin-zho          #+#    #+#             */
/*   Updated: 2024/03/16 14:35:25 by zlin-zho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*envio(char *str, char *to_find, int n, int n1)
{
	while (str[n] != '\0')
	{
		to_find[n1] = str[n];
		n1++;
		n++;
	}
	to_find[n] = '\0';
	return (to_find);
}

int	comprobar(char *str, char *to_find, int n)
{
	int	m;
	m = 0;

	while (str[n] == to_find[m] && to_find[m] != '\0')
	{
		n++;
		m++;
	}
	if (to_find[m] == '\0')
		return (1);

	return (0);
}

char	*ft_strnstr(char *str, char *to_find, int l)
{
	int	n;
	int	n1;
	int	test;

	n = 0;
	n1 = 0;
	if (*to_find == '\0')
		return (str);
	while (str[n] != '\0' && n < l)
	{
		if (str[n] == to_find[0])
		{
			test = comprobar(str, to_find, n);
			if (test == 1)
				return (envio(str, to_find, n, n1));
		}
		n++;
	}
	return (0);
}