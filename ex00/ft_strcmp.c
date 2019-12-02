/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 08:52:51 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/02 12:43:04 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	left;
	unsigned char	right;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		left = (unsigned char)s1[i];
		right = (unsigned char)s2[i];
		if ((left < right) || (right > left))
		{
			return (left - right);
		}
		i++;
	}
	return (0);
}
