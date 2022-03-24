/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_howmany.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: md-aless <md-aless@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:18:25 by md-aless          #+#    #+#             */
/*   Updated: 2022/03/16 16:20:12 by md-aless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap.h"

int	how_many_ra(t_list **a, t_list **b, t_content bag)
{
	int		count;
	int		temp;

	bag.i = 0;
	count = 100000;
	bag.ind = 40;
	while (!((*a)->cnt > (*b)->cnt && bag.last_a < (*b)->cnt))
	{
		rotate_a(a, false);
		bag.i++;
		bag.last_a = ft_lstlast(*a)->cnt;
		if (!check_for_condition(a, b, bag) || bag.i > bag.ind)
		{
			if (count > bag.i)
				return (bag.i);
			else
				return (count);
		}
		temp = counter_moves(a, b, bag);
		if (count > (temp + bag.i))
			count = temp + bag.i;
		if (count <= 10)
			return (count);
	}
	return (bag.i);
}

int	how_many_rra(t_list **a, t_list **b, t_content bag)
{
	int		count;
	int		temp;

	bag.i = 0;
	count = 100000;
	bag.ind = 40;
	while (!((*a)->cnt > (*b)->cnt && bag.last_a < (*b)->cnt))
	{
		rotate_reverse_a(a, false);
		bag.i++;
		bag.last_a = ft_lstlast(*a)->cnt;
		if (!check_for_condition(a, b, bag) || bag.i > bag.ind)
		{
			if (count > bag.i)
				return (bag.i);
			else
				return (count);
		}
		temp = counter_moves(a, b, bag);
		if (count > (temp + bag.i))
			count = temp + bag.i;
		if (count <= 10)
			return (count);
	}
	return (bag.i);
}

int	how_many_rb(t_list **a, t_list **b, t_content bag)
{
	int		count;
	int		temp;

	bag.i = 0;
	count = 100000;
	bag.ind = 40;
	while (!((*a)->cnt > (*b)->cnt && bag.last_a < (*b)->cnt))
	{
		rotate_b(b, false);
		bag.i++;
		bag.last_a = ft_lstlast(*a)->cnt;
		if (!check_for_condition(a, b, bag) || bag.i > bag.ind)
		{
			if (count > bag.i)
				return (bag.i);
			else
				return (count);
		}
		temp = counter_moves(a, b, bag);
		if (count > (temp + bag.i))
			count = temp + bag.i;
		if (count <= 10)
			return (count);
	}
	return (bag.i);
}

int	how_many_rrb(t_list **a, t_list **b, t_content bag)
{
	int		count;
	int		temp;

	bag.i = 0;
	count = 100000;
	bag.ind = 40;
	while (!((*a)->cnt > (*b)->cnt && bag.last_a < (*b)->cnt))
	{
		rotate_reverse_b(b, false);
		bag.i++;
		bag.last_a = ft_lstlast(*a)->cnt;
		if (!check_for_condition(a, b, bag) || bag.i > bag.ind)
		{
			if (count > bag.i)
				return (bag.i);
			else
				return (count);
		}
		temp = counter_moves(a, b, bag);
		if (count > (temp + bag.i))
			count = temp + bag.i;
		if (count <= 10)
			return (count);
	}
	return (bag.i);
}

int	how_many_rr(t_list **a, t_list **b, t_content bag)
{
	int		count;
	int		temp;

	bag.i = 0;
	count = 100000;
	bag.ind = 40;
	while (!((*a)->cnt > (*b)->cnt && bag.last_a < (*b)->cnt))
	{
		rotate_a_b(a, b, false);
		bag.i++;
		bag.last_a = ft_lstlast(*a)->cnt;
		if (!check_for_condition(a, b, bag) || bag.i > bag.ind)
		{
			if (count > bag.i)
				return (bag.i);
			else
				return (count);
		}
		temp = counter_moves(a, b, bag);
		if (count > (temp + bag.i))
			count = temp + bag.i;
		if (count <= 10)
			return (count);
	}
	return (bag.i);
}
