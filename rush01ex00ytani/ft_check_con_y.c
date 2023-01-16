/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_con_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytani <ytani@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 16:14:16 by ytani             #+#    #+#             */
/*   Updated: 2022/06/26 16:14:16 by ytani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_insert_l1_and_r2(int left, int right, int y, int result[6][6]);
void	ft_insert_l2_and_r1(int left, int right, int y, int result[6][6]);
void	ft_insert_l1_and_r3(int left, int right, int y, int result[6][6]);
void	ft_insert_l3_and_r1(int left, int right, int y, int result[6][6]);
void	ft_insert_l1_and_r4(int left, int right, int y, int result[6][6]);
void	ft_insert_l4_and_r1(int left, int right, int y, int result[6][6]);
void	ft_insert_l2_and_r3(int left, int right, int y, int result[6][6]);
void	ft_insert_l3_and_r2(int left, int right, int y, int result[6][6]);

void	ft_check_con_y(int left, int right, int y, int result[6][6])
{
	ft_insert_l1_and_r2(left, right, y, result);
	ft_insert_l2_and_r1(left, right, y, result);
	ft_insert_l1_and_r3(left, right, y, result);
	ft_insert_l3_and_r1(left, right, y, result);
	ft_insert_l1_and_r4(left, right, y, result);
	ft_insert_l4_and_r1(left, right, y, result);
	ft_insert_l2_and_r3(left, right, y, result);
	ft_insert_l3_and_r2(left, right, y, result);
}
