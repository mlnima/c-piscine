/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimalaye <nimalaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:18:23 by nimalaye          #+#    #+#             */
/*   Updated: 2024/09/05 10:06:19 by nimalaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0'; 
	return (dest_start); 
}

//int main(void)
//{
//    char src[] = "Hello, world!"; 
//    char dest[50];
//    ft_strcpy(dest, src);

//    printf("Source: %s\n", src);
//    printf("Destination: %s\n", dest);
//    return 0;
//}