/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 10:14:30 by ecerquei          #+#    #+#             */
/*   Updated: 2019/11/28 15:21:22 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int dest_size;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest_size = i;
	while (src[i - dest_size] != '\0')
	{
		dest[i] = src[i - dest_size];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
