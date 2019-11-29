/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 10:14:30 by ecerquei          #+#    #+#             */
/*   Updated: 2019/11/28 23:03:56 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int dest_size;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest_size = i;
	while (src[i - dest_size] != '\0' && (i - dest_size) < nb)
	{
		dest[i] = src[i - dest_size];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
