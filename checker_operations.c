/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schmurz <schmurz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 21:23:07 by schmurz           #+#    #+#             */
/*   Updated: 2018/03/03 11:30:09 by dsaadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_pile *pile, int wr)
{
	int tmp;

	if (pile->len >= 2)
	{
		tmp = (pile->vals)[0];
		(pile->vals)[0] = (pile->vals)[1];
		(pile->vals)[1] = tmp;
	}
	if (wr && pile->name == 'A')
		ft_lstadd(&g_ops, ft_lstnew("sa", 3));
	if (wr && pile->name == 'B')
		ft_lstadd(&g_ops, ft_lstnew("sb", 3));
}

void	sswap(t_pile *apile, t_pile *bpile, int wr)
{
	swap(apile, 0);
	swap(bpile, 0);
	if (wr)
		ft_lstadd(&g_ops, ft_lstnew("ss", 3));
}

void	rotate(t_pile *pile, int wr)
{
	int i;
	int tmp;

	if (pile->len >= 2)
	{
		i = -1;
		tmp = (pile->vals)[0];
		while (++i < ((pile->len) - 1))
			(pile->vals)[i] = (pile->vals)[i + 1];
		(pile->vals)[(pile->len) - 1] = tmp;
	}
	if (wr && pile->name == 'A')
		ft_lstadd(&g_ops, ft_lstnew("ra", 3));
	if (wr && pile->name == 'B')
		ft_lstadd(&g_ops, ft_lstnew("rb", 3));
}

void	rotate_nc(t_pile pile)
{
	int i;
	int tmp;

	if (pile.len >= 2)
	{
		i = -1;
		tmp = (pile.vals)[0];
		while (++i < ((pile.len) - 1))
			(pile.vals)[i] = (pile.vals)[i + 1];
		(pile.vals)[(pile.len) - 1] = tmp;
	}
}
