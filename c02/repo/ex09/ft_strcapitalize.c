/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:49:39 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/09 13:45:20 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*convertor(char *letter, int index)
{
	if (index == 0 && (*letter >= 'a' && *letter <= 'z'))
	{
		*letter -= 32;
	}
	else if (index >= 1 && (*letter >= 'A' && *letter <= 'Z'))
	{
		*letter += 32;
	}
	return (letter);
}

char	*ft_strcapitalize(char *str)
{
	char	*output;
	int		indexer;

	indexer = 0;
	output = str;
	while (*str)
	{
		if (
			(*str > 31 && *str < 48) 
			|| (*str > 57 && *str < 65) 
			|| (*str > 90 && *str < 97)
			|| (*str > 122)
		)
		{
			indexer = -1;
		}
		str = convertor(str, indexer);
		str++;
		indexer++;
	}
	return (output);
}
