/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:00:59 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/17 10:34:38 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	indexer;

	indexer = 0;
	if (n == 0)
		return (0);
	while (indexer < n)
	{
		if (
			s1[indexer] == '\0' 
			|| s2[indexer] == '\0' 
			|| s1[indexer] != s2[indexer]
		)
		{
			return ((unsigned char)s1[indexer] - (unsigned char)s2[indexer]);
		}
		indexer++;
	}
	return (0);
}
