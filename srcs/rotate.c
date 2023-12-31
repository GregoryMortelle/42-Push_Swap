/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:48:28 by grmortel          #+#    #+#             */
/*   Updated: 2023/11/02 13:26:14 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	ft_rotate(t_list **list)
{
	t_list	*tmp;

	if (ft_lstsize((*list)) < 2)
		return ;
	tmp = *list;
	tmp->next = NULL;
	ft_lstadd_back(list, tmp);
	(*list) = (*list)->next;
}

void	ft_ra(t_list *list)
{
	ft_rotate(&list);
	ft_printf("ra\n");
}

void	ft_rb(t_list *list)
{
	ft_rotate(&list);
	ft_printf("rb\n");
}

void	ft_rr(t_list *list)
{
	ft_ra(list);
	ft_rb(list);
	ft_printf("rr\n");
}