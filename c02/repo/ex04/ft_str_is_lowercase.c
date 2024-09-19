/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:26:25 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/04 13:38:15 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		faild;
	char	current;

	faild = 1;
	while (*str)
	{
		current = *str;
		if (current >= 'a' && current <= 'z')
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
