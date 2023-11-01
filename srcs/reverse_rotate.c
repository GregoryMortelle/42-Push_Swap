/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:37:10 by grmortel          #+#    #+#             */
/*   Updated: 2023/11/01 17:01:04 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_reverse_rotate(t_list **list)
{
	t_list	*tmp;
	t_list	*tmp1;
	
	if (ft_lstsize(list) < 2)
		return ;
	tmp = *list;
	tmp1 = ft_lstlast(list);
	while (tmp)
	{
		if ((tmp)->next->next == NULL)
		{
			tmp->next == NULL;
			break ;
		}
		tmp = tmp->next;
	}
	ft_lstadd_front(list, tmp1);
}
	

void	ft_rra(t_list *list)
{

}

void	ft_rrb(t_list *list)
{
	
}

void	ft_rrr(t_list *list)
{
	
}