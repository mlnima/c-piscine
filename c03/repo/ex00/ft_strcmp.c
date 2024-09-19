/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:36:25 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/11 12:36:25 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	indexer;

	indexer = 0;
	while (s1[indexer] != '\0' || s2[indexer] != '\0')
	{
		if (s1[indexer] != s2[indexer])
		{
			return (s1[indexer] - s2[indexer]);
		}
		indexer++;
	}
	return (0);
}
