/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: md-aless <md-aless@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:18:37 by md-aless          #+#    #+#             */
/*   Updated: 2022/03/11 15:18:38 by md-aless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap.h"

int	counter_moves_ra(t_list **a, t_list **b, t_content bag, int *c)
{
	int	temp;

	*c = 1;
	back_to_normal1(a, b, bag, *c);
	temp = counter_how_many_ra(a, b, bag);
	back_to_normal1(a, b, bag, *c);
	return (temp);
}

int	counter_moves_rra(t_list **a, t_list **b, t_content bag, int *c)
{
	int	temp;

	*c = 2;
	back_to_normal1(a, b, bag, *c);
	temp = counter_how_many_rra(a, b, bag);
	back_to_normal1(a, b, bag, *c);
	return (temp);
}

int	counter_moves_rr(t_list **a, t_list **b, t_content bag, int *c)
{
	int	temp;

	*c = 3;
	back_to_normal1(a, b, bag, *c);
	temp = counter_how_many_rr(a, b, bag);
	back_to_normal1(a, b, bag, *c);
	return (temp);
}

int	counter_moves_rrr(t_list **a, t_list **b, t_content bag, int *c)
{
	int	temp;

	*c = 4;
	back_to_normal1(a, b, bag, *c);
	temp = counter_how_many_rrr(a, b, bag);
	back_to_normal1(a, b, bag, *c);
	return (temp);
}

int	counter_moves_rb(t_list **a, t_list **b, t_content bag, int *c)
{
	int	temp;

	*c = 5;
	back_to_normal1(a, b, bag, *c);
	temp = counter_how_many_rb(a, b, bag);
	back_to_normal1(a, b, bag, *c);
	return (temp);
}
