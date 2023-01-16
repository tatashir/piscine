/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujii <kfujii@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 21:31:08 by kfujii            #+#    #+#             */
/*   Updated: 2022/07/04 21:44:31 by kfujii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_x(int I, int J, int max_num, char *num[])
{
	int	i;
	int	j;

	i = I - max_num;
	j = J - max_num;
	while (i < max_num)
	{
		while (j < max_num)
		{
			num[i][j] = 'X';
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
}
