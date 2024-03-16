/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlin-zho <zlin-zho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:32:29 by zlin-zho          #+#    #+#             */
/*   Updated: 2024/03/16 15:39:37 by zlin-zho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char	*str)
{
	int	n;
	int	signo;

	n = 0;
	signo = 1;
	while (*str == ' ' || (*str >= 8 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signo = signo * -1;
		str++;
	}
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			n = n * 10;
			n = n + *str - 48;
		}
		else
			return (n * signo);
		str++;
	}
	return (n * signo);
}
