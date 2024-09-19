/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:13:39 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/17 10:34:35 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_len;
	unsigned int	src_indexer;

	dest_len = 0;
	src_indexer = 0;
	while (dest[dest_len])
		dest_len++;
	while (src_indexer < nb && src[src_indexer] != '\0')
	{
		dest[dest_len] = src[src_indexer];
		dest_len++;
		src_indexer++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
