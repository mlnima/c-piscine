/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:36:01 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/17 13:03:55 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	trigger;
	int	index;
	int	temp;

	while (1)
	{
		trigger = 0;
		index = 0;
		while (index < size - 1)
		{
			if (tab[index] > tab[index + 1])
			{
				temp = tab[index];
				tab[index] = tab[index + 1];
				tab[index +1] = temp;
				trigger = 1;
			}
			index ++;
		}
		if (!trigger)
		{
			break ;
		}
		size--;
	}
}
