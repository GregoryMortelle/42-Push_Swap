/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:37:02 by grmortel          #+#    #+#             */
/*   Updated: 2023/10/31 18:27:40 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// INCLUDE PART

#include <stdlib.h>
#include "../libft/libft.h"
#include "../printf/ft_printf.h"

// STRUCT PART

typedef struct s_list
{
	int				*content;
	struct s_list	*next;
}	t_list;

// FONCTION PART

void	ft_sa(t_list *list);
void	ft_sb(t_list *list);
void	ft_ss(t_list *list);

#endif