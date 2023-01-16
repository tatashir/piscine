/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 07:54:53 by tatashir          #+#    #+#             */
/*   Updated: 2022/07/02 19:24:40 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	unsigned int	c;
	int				diff;

	c = 0;
	diff = 0;
	while ((c < n) && diff == 0 && (str1[c] != '\0' || str2[c] != '\0'))
	{
		diff = (unsigned char)str1[c] - (unsigned char)str2[c];
		c++;
	}
	if (c < n && diff == 0 && (str1[c] == '\0' || str2[c] == '\0'))
		diff = (unsigned char)str1[c] - (unsigned char)str2[c];
	return (diff);
}
