/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:03:56 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/04 13:38:47 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		faild;
	char	current;

	faild = 1;
	while (*str)
	{
		current = *str;
		if (current >= 'A' && current <= 'Z')
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
