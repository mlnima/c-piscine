/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:25:19 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/09 13:42:16 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	decimal2hex_convertor(char value)
{
	const char	hex_digits[] = "0123456789abcdef";
	char		high_nibble;
	char		low_nibble;

	high_nibble = hex_digits[value >> 4];
	low_nibble = hex_digits[value & 0x0F];
	write(1, &high_nibble, 1);
	write(1, &low_nibble, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	h_dec;

	while (*str)
	{
		h_dec = *str;
		if (h_dec < 32 || h_dec == 127)
		{
			write(1, "\\", 1);
			decimal2hex_convertor(h_dec);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
