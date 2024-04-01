/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:37:02 by grmortel          #+#    #+#             */
/*   Updated: 2024/04/01 05:39:47 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// INCLUDE PART

#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>

// STRUCT PART

typedef struct s_node
{
	int	data;
	struct s_node	*head;
	struct s_node	*next;
}	t_node;

typedef struct s_stack

{
	t_node	top;
	int	length;
}	t_stack;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// FONCTION PART

void	ft_sa(t_list *list);
void	ft_sb(t_list *list);
void	ft_ss(t_list *list);
void	ft_pa(t_list **list_a, t_list **list_b);
void	ft_pb(t_list **list_a, t_list **list_b);
void	ft_rra(t_list *list);
void	ft_rrb(t_list *list);
void	ft_rrr(t_list *list);
void	ft_ra(t_list *list);
void	ft_rb(t_list *list);
void	ft_rr(t_list *list);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int	ft_lstsize(t_list *lst);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	**ft_split(const char *str, char c);
int	ft_atoi(const char *nptr);



#endif
