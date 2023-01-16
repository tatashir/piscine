/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_con_1_4.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytani <ytani@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:39:34 by ytani             #+#    #+#             */
/*   Updated: 2022/06/26 20:39:34 by ytani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_t1_and_d4(int top, int down);
int	ft_check_t4_and_d1(int top, int down);
int	ft_check_l1_and_r4(int left, int right);
int	ft_check_l4_and_r1(int left, int right);

void	ft_insert_t1_and_d4(int top, int down, int x, int result[6][6])
{
	if (ft_check_t1_and_d4(top, down) == 4)
	{
		result[x][1] = 4;
		result[x][2] = 3;
		result[x][3] = 2;
		result[x][4] = 1;
	}
}

void	ft_insert_t4_and_d1(int top, int down, int x, int result[6][6])
{
	if (ft_check_t4_and_d1(top, down) == 4)
	{
		result[x][1] = 1;
		result[x][2] = 2;
		result[x][3] = 3;
		result[x][4] = 4;
	}
}

void	ft_insert_l1_and_r4(int left, int right, int y, int result[6][6])
{
	if (ft_check_l1_and_r4(left, right) == 4)
	{
		result[1][y] = 4;
		result[2][y] = 3;
		result[3][y] = 2;
		result[4][y] = 1;
	}
}

void	ft_insert_l4_and_r1(int left, int right, int y, int result[6][6])
{
	if (ft_check_l4_and_r1(left, right) == 4)
	{
		result[1][y] = 1;
		result[2][y] = 2;
		result[3][y] = 3;
		result[4][y] = 4;
	}
}
