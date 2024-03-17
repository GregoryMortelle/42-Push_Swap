/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:58:05 by grmortel          #+#    #+#             */
/*   Updated: 2024/03/17 17:22:20 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	ft_swap(t_list **list)
{
	t_list	*tmp;

	if (ft_lstsize((*list)) < 2)
		return ;
	tmp = *list;
	(*list) = (*list)->next;
	tmp->next = tmp->next->next;
	(*list)->next = tmp;
}

void	ft_sa(t_list *list)
{
	ft_swap(&list);
	write(1, "sa\n", 3);
}

void	ft_sb(t_list *list)
{
	ft_swap(&list);
	write(1, "sb\n", 3);
}

void	ft_ss(t_list *list)
{
	ft_swap(&list);
	ft_swap(&list);
	write(1, "ss\n", 3);
}
