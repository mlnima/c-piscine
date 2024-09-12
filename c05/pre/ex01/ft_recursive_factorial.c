/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 07:16:17 by marvin            #+#    #+#             */
/*   Updated: 2024/09/12 07:16:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_store
{
    int ex00result;
    int ex01factorial_start;
} t_store;

int floor_division(int a, int b) {
    struct s_store store;
    store.ex00result = a / b;
    if (a % b != 0 && (a < 0) != (b < 0)) {
        store.ex00result -= 1;
    }
    return store.ex00result;
}

int ft_recursive_factorial(int nb)
{
    struct s_store store;
    store.ex01factorial_start = 2;

    if (nb < 0) {
        return (0);
    }
    if (nb == 0 || nb == 1 ) {
        return (1);
    }

    while (nb > 1) {
        if (nb % store.ex01factorial_start != 0) {
            return (0);
        }
        nb = floor_division(nb, store.ex01factorial_start);
        store.ex01factorial_start++;
    }
    return (store.ex01factorial_start - 1);
}

