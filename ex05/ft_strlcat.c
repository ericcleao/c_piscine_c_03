/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 00:56:06 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/03 09:09:01 by ecerquei         ###   ########.fr       */
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

	i = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
	}
	dest_size = i;
	while (src[i - dest_size] != '\0' && (i + 1) < size)
	{
		dest[i] = src[i - dest_size];
		i++;
	}
	dest[i] = '\0';
	return (dest_size + ft_strlen(src));
}
