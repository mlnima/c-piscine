/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:48:18 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/17 10:46:39 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len_calculator(const char *str_source)
{
	int	string_length;

	string_length = 0;
	while (str_source[string_length] != '\0')
	{
		string_length++;
	}
	return (string_length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	des_length;
	int				src_length;
	int				remained_space;
	int				indexer;

	indexer = 0;
	des_length = len_calculator(dest);
	src_length = len_calculator(src);
	remained_space = size - des_length;
	if (size <= des_length)
	{
		return (size + src_length);
	}
	while (indexer <= remained_space && src[indexer] != '\0')
	{
		dest[des_length + indexer] = src[indexer];
		indexer++;
	}
	dest[des_length + indexer] = '\0';
	return (des_length + src_length);
}
