/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:25:32 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/10 14:28:54 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*pattern;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		start = str;
		pattern = to_find;
		while (*start && *pattern && *start == *pattern)
		{
			start++;
			pattern++;
		}
		if (*pattern == '\0')
			return (str);
		str++;
	}
	return (0);
}
