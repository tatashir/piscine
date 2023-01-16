/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_con_1_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytani <ytani@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:39:05 by ytani             #+#    #+#             */
/*   Updated: 2022/06/26 20:39:05 by ytani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_t1_and_d2(int top, int down);
int	ft_check_t2_and_d1(int top, int down);
int	ft_check_l1_and_r2(int left, int right);
int	ft_check_l2_and_r1(int left, int right);

void	ft_insert_t1_and_d2(int top, int down, int x, int result[6][6])
{
	if (ft_check_t1_and_d2(top, down) == 2)
	{
		result[x][1] = 4;
		result[x][4] = 3;
	}
}

void	ft_insert_t2_and_d1(int top, int down, int x, int result[6][6])
{
	if (ft_check_t2_and_d1(top, down) == 2)
	{
		result[x][1] = 3;
		result[x][4] = 4;
	}
}

void	ft_insert_l1_and_r2(int left, int right, int y, int result[6][6])
{
	if (ft_check_l1_and_r2(left, right) == 2)
	{
		result[1][y] = 4;
		result[4][y] = 3;
	}
}

void	ft_insert_l2_and_r1(int left, int right, int y, int result[6][6])
{
	if (ft_check_l2_and_r1(left, right) == 2)
	{
		result[1][y] = 3;
		result[4][y] = 4;
	}
}
