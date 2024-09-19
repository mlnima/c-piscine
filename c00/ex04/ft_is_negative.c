/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:13:14 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/03 12:19:03 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	ch;

	if (n < 0)
	{
		ch = 'N';
	}
	else
	{
		ch = 'P';
	}
	write(1, &ch, 1);
}

//int main()
//{
//    // Test with different values
//    ft_is_negative(-10);  // Should print 'N'
//    write(1, "\n", 1);   // Print a newline for separation

//    ft_is_negative(0);    // Should print 'P'
//    write(1, "\n", 1);   // Print a newline for separation

//    ft_is_negative(7);    // Should print 'P'
//    write(1, "\n", 1);   // Print a newline for separation

//    return 0;
//}