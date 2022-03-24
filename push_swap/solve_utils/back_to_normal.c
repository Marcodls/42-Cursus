/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   back_to_normal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: md-aless <md-aless@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:18:23 by md-aless          #+#    #+#             */
/*   Updated: 2022/03/11 15:18:24 by md-aless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap.h"

int	choose_how_to(t_list *list, int find)
{
	int		*arr;
	int		i;
	t_list	*temp;
	int		count_arr;

	i = 0;
	count_arr = 0;
	temp = list;
	while (list->cnt != find && list)
	{
		list = list->next;
		i++;
	}
	while (temp)
	{
		temp = temp->next;
		count_arr++;
	}
	if (i < count_arr / 2)
		return (1);
	else
		return (0);
}

void	back_to_normal_util(t_list **a, t_list **b, t_content bag)
{
	while ((*a)->cnt != bag.cont_a)
		rotate_a(a, false);
	while ((*b)->cnt != bag.cont_b)
		rotate_b(b, false);
}

void	back_to_normal_util_1(t_list **a, t_list **b, t_content bag)
{
	while ((*a)->cnt != bag.new_cont_a)
		rotate_a(a, false);
	while ((*b)->cnt != bag.new_cont_b)
		rotate_b(b, false);
}

void	back_to_normal(t_list **a, t_list **b, t_content bag, int code)
{
	while ((*a)->cnt != bag.cont_a || (*b)->cnt != bag.cont_b)
	{
		if (code == 1)
			rotate_reverse_a(a, false);
		else if (code == 2)
			rotate_a(a, false);
		else if (code == 3)
			rotate_reverse_a_b(a, b, false);
		else if (code == 4)
			rotate_a_b(a, b, false);
		else if (code == 5)
			rotate_reverse_b(b, false);
		else if (code == 6)
			rotate_b(b, false);
	}
}

void	back_to_normal1(t_list **a, t_list **b, t_content bag, int code)
{
	while ((*a)->cnt != bag.new_cont_a || (*b)->cnt != bag.new_cont_b)
	{
		if (code == 1)
			rotate_reverse_a(a, false);
		else if (code == 2)
			rotate_a(a, false);
		else if (code == 3)
			rotate_reverse_a_b(a, b, false);
		else if (code == 4)
			rotate_a_b(a, b, false);
		else if (code == 5)
			rotate_reverse_b(b, false);
		else if (code == 6)
			rotate_b(b, false);
	}
}
