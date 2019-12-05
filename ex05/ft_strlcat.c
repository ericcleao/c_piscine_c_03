/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 00:56:06 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/05 18:40:11 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	unsigned int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int dest_size;

	dest_size = 0;
	while (dest[dest_size] != '\0' && dest_size < size)
	{
		dest_size++;
	}
	i = dest_size;
	while (src[i - dest_size] != '\0' && (i + 1) < size)
	{
		dest[i] = src[i - dest_size];
		i++;
	}
	if (size > dest_size)
		dest[i] = '\0';
	return (dest_size + ft_strlen(src));
}
