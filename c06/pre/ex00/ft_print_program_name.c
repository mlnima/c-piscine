/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:11:43 by marvin            #+#    #+#             */
/*   Updated: 2024/09/12 15:11:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int _, char *argv[])
{
    (void)_;

    int len = 0;
    while (argv[0][len] != '\0')
        len++;

    write(1, argv[0], len);
    return (0);
}