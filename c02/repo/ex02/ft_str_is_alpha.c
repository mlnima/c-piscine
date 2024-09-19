/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:49:44 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/05 10:09:09 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		faild;
	char	current;

	faild = 1;
	while (*str)
	{
		current = *str;
		if (
			(current >= 'a' && current <= 'z') 
			|| (current >= 'A' && current <= 'Z')
		)
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
