/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   true.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytani <ytani@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:41:32 by ytani             #+#    #+#             */
/*   Updated: 2022/06/26 20:41:32 by ytani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	ft_check_con_x(int top, int down, int x, volatile int result[6][6]);
void	ft_check_con_y(int left, int right, int y, volatile int result[6][6]);

void	ft_create_hint_table_zero(volatile int result[6][6])
{
	result[0][0] = 0;
	result[0][5] = 0;
	result[1][1] = 0;
	result[1][2] = 0;
	result[1][3] = 0;
	result[1][4] = 0;
	result[2][1] = 0;
	result[2][2] = 0;
	result[2][3] = 0;
	result[2][4] = 0;
	result[3][1] = 0;
	result[3][2] = 0;
	result[3][3] = 0;
	result[3][4] = 0;
	result[4][1] = 0;
	result[4][2] = 0;
	result[4][3] = 0;
	result[4][4] = 0;
	result[5][0] = 0;
	result[5][5] = 0;
}

void	ft_create_hint_table(int num[16], volatile int result[6][6])
{
	result[0][1] = num[0];
	result[0][2] = num[1];
	result[0][3] = num[2];
	result[0][4] = num[3];
	result[5][1] = num[4];
	result[5][2] = num[5];
	result[5][3] = num[6];
	result[5][4] = num[7];
	result[1][0] = num[8];
	result[2][0] = num[9];
	result[3][0] = num[10];
	result[4][0] = num[11];
	result[1][5] = num[12];
	result[2][5] = num[13];
	result[3][5] = num[14];
	result[4][5] = num[15];
}

void	ft_insert_number_con(int result[6][6])
{
	int	x;
	int	y;

	x = 1;
	while (x < 5)
	{
		ft_check_con_x(result[x][0], result[x][5], x, result);
		x++;
	}
	y = 1;
	while (y < 5)
	{
		ft_check_con_y(result[0][y], result[5][y], y, result);
		y++;
	}
}

void	ft_con_check(volatile int result[6][6])
{
	int	x;
	int	y;

	x = 1;
	while (x < 5)
	{
		ft_check_con_x(result[x][0], result[x][5], x, result);
		x++;
	}
	y = 1;
	while (y < 5)
	{
		ft_check_con_y(result[0][y], result[5][y], y, result);
		y++;
	}
}

void	ft_table(int num[16])
{
	volatile int	result[6][6];
	int				x;
	int				y;

	ft_create_hint_table_zero(result);
	ft_create_hint_table(num, result);
	ft_con_check(result);
	x = 1;
	y = 1;
	while (x < 5)
	{
		while (y < 5)
		{
			ft_putchar(result[x][y] + '0');
			ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		y = 1;
		x++;
	}
}
