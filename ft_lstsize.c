/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajaanan <aajaanan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:23:16 by aajaanan          #+#    #+#             */
/*   Updated: 2023/07/04 09:17:07 by aajaanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *head)
{
	int		size;
	t_list	*temp;

	size = 0;
	temp = head;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
