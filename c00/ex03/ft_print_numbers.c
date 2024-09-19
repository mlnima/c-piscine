/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:13:01 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/02 10:17:34 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void)
{
	int		current_number;
	char	digit;

	current_number = 0;
	while (current_number <= 9)
	{
		digit = '0' + current_number;
		write(1, &digit, sizeof(digit));
		current_number++;
	}
}
