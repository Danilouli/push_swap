/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualizator.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schmurz <schmurz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 22:32:30 by schmurz           #+#    #+#             */
/*   Updated: 2018/02/23 18:28:40 by dsaadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void view_pile(t_pile pile)
{
  int i;

  i = 0;
  while (i < pile.len)
  {
    ft_printf("%d, ",pile.vals[i]);
    i++;
  }
	ft_putchar('\n');
}
