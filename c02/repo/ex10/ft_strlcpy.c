/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:06:39 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/05 10:22:28 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	indexer;
	unsigned int	src_length;

	indexer = 0;
	src_length = 0;
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	if (size == 0)
	{
		return (src_length);
	}
	while (src[indexer] && indexer < size -1)
	{
		dest[indexer] = src[indexer];
		indexer++;
	}
	dest[indexer] = '\0';
	return (src_length);
}

//int	main(void)
//{
//	char	src[] = "Hello, World!x";
//	char	dest[20];
//	int		length;

//	length = ft_strlcpy(dest, src, sizeof(dest));
//	printf("Source: %s\n", src);
//	printf("Destination (large buffer): %s\n", dest);
//	printf("Length of source string: %u\n", length);
//	return (0);
//}
