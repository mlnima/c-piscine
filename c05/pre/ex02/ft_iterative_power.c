/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 07:57:16 by marvin            #+#    #+#             */
/*   Updated: 2024/09/12 07:57:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int result;

    if (power == 0)
    {
        return (0);
    }
    if (power == 1)
    {
        return (nb);
    }
    result = nb * nb;
    power--;
    while (power > 1)
    {
        result *= nb;
        power--;
    }
    return (result);
}
