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

void	ft_insert_t1_and_d2(int top, int down, int x, int result[6][6]);
void	ft_insert_t2_and_d1(int top, int down, int x, int result[6][6]);
void	ft_insert_t1_and_d3(int top, int down, int x, int result[6][6]);
void	ft_insert_t3_and_d1(int top, int down, int x, int result[6][6]);
void	ft_insert_t1_and_d4(int top, int down, int x, int result[6][6]);
void	ft_insert_t4_and_d1(int top, int down, int x, int result[6][6]);
void	ft_insert_t2_and_d3(int top, int down, int x, int result[6][6]);
void	ft_insert_t3_and_d2(int top, int down, int x, int result[6][6]);

void	ft_check_con_x(int top, int down, int x, int result[6][6])
{
	ft_insert_t1_and_d2(top, down, x, result);
	ft_insert_t2_and_d1(top, down, x, result);
	ft_insert_t1_and_d3(top, down, x, result);
	ft_insert_t3_and_d1(top, down, x, result);
	ft_insert_t1_and_d4(top, down, x, result);
	ft_insert_t4_and_d1(top, down, x, result);
	ft_insert_t2_and_d3(top, down, x, result);
	ft_insert_t3_and_d2(top, down, x, result);
}
