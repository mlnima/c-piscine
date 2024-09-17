/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 08:45:46 by marvin            #+#    #+#             */
/*   Updated: 2024/09/13 08:45:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void arg_writer(char *arg)
{
    int len = 0;
    while (arg[len] != '\0')
        len++;

    write(1, arg, len);
    write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
    int indexer = 1;
    while (indexer < argc)
    {
        arg_writer(argv[indexer]);
        indexer++;
    }
    return (0);
}