/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:12:21 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/03 13:01:15 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef struct s_vars
{
	int		thousand;
	int		hundreds;
	int		tens;
	int		units;
	char	str[8];
}	t_vars;

void	ft_write_result(t_vars *comb)
{
	comb->str[0] = '0' + comb->thousand;
	comb->str[1] = '0' + comb->hundreds;
	comb->str[2] = ' ';
	comb->str[3] = '0' + comb->tens;
	comb->str[4] = '0' + comb->units;
	comb->str[5] = ',';
	comb->str[6] = ' ';
	comb->str[7] = '\0';
	write(1, comb->str, 8);
}

void	ft_print_comb2(void)
{
	struct s_vars	comb;

	comb.thousand = 0;
	while (comb.thousand <= 9)
	{
		comb.hundreds = comb.thousand + 1;
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
		++comb.thousand;
	}
}

//int	main(void)
//{
//	ft_print_comb2();
//	return (0);
//}
