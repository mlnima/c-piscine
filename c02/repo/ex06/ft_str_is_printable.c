/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:10:17 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/09 13:43:19 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		faild;
	int		c_decimal;
	char	current;

	faild = 1;
	while (*str)
	{
		current = *str;
		c_decimal = *str;
		if (c_decimal >= 32 && c_decimal <= 126)
		{
			str++;
			continue ;
		}
		else
		{
			faild = 0;
			break ;
		}
	}
	return (faild);
}
