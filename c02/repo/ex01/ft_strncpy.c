/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:39:24 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/09 13:24:38 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		indexer;

	indexer = 0;
	while (indexer < n && src[indexer] != '\0')
	{
		dest[indexer] = src[indexer];
		indexer++;
	}
	while (indexer < n)
	{
		dest[indexer] = '\0';
		indexer++;
	}
	return (dest); 
}
