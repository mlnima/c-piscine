/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:36:50 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/10 12:00:03 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	src_indexer;

	dest_len = 0;
	src_indexer = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[src_indexer])
	{
		dest[dest_len] = src[src_indexer];
		dest_len++;
		src_indexer++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
