/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:10:06 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/04 13:37:13 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		faild;
	char	current;

	faild = 1;
	while (*str)
	{
		current = *str;
		if (current >= '0' && current <= '9')
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
