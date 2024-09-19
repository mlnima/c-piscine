/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:12:21 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/03 13:01:01 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef struct s_vars
{
	int		hundreds;
	int		tens;
	int		units;
	char	str[6];
}	t_vars;

void	ft_write_result(t_vars *comb)
{
	comb->str[0] = '0' + comb->hundreds;
	comb->str[1] = '0' + comb->tens;
	comb->str[2] = '0' + comb->units;
	comb->str[3] = ',';
	comb->str[4] = ' ';
	comb->str[5] = '\0';
	write(1, comb->str, 6);
}

void	ft_print_comb(void)
{
	struct s_vars	comb;

	comb.hundreds = 0;
	while (comb.hundreds <= 9)
	{
		comb.tens = comb.hundreds + 1;
		while (comb.tens <= 9)
		{
			comb.units = comb.tens + 1;
			while (comb.units <= 9)
			{
				ft_write_result(&comb);
				++comb.units;
			}
			++comb.tens;
		}
		++comb.hundreds;
	}
}

//int	main(void)
//{
//	ft_print_comb();
//	return (0);
//}
