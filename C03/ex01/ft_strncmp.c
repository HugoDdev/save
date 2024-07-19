/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huduhen <huduhen@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:15:14 by huduhen           #+#    #+#             */
/*   Updated: 2024/07/19 12:39:05 by huduhen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < n && s1[j] == s2[j] && s1[j] != '\0' && s2[j] != '\0')
	{
		j++;
		i++;
	}
	if (i == n)
		return (0);
	return (s1[j] - s2[j]);
}
