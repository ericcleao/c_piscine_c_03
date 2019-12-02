/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 23:06:25 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/02 17:08:11 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int cursor;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		cursor = 0;
		while (str[i + cursor] == to_find[cursor])
		{
			if (to_find[cursor + 1] == '\0')
			{
				return (&str[i]);
			}
			cursor++;
		}
		i++;
	}
	return (0);
}
