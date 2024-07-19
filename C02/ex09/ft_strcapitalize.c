/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huduhen <huduhen@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:48:08 by huduhen           #+#    #+#             */
/*   Updated: 2024/07/18 18:16:51 by huduhen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 || (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z')
					&& !(str[i - 1] >= '0' && str[i - 1] <= '9')))
			&& (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		else if (!(i == 0 || (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z' )
					&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z')
					&& !(str[i - 1] >= '0' && str[i - 1] <= '9')))
			&& (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
