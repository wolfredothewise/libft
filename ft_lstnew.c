/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhedo-ga <vhedo-ga <vhedo-ga@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:59:35 by vhedo-ga          #+#    #+#             */
/*   Updated: 2025/10/10 16:04:19 by vhedo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodo;

	nodo = malloc(sizeof(t_list));
	if (!nodo)
		return (NULL);
	nodo->content = content;
	nodo->next = (NULL);
	return (nodo);
}

// #include <stdio.h>
// int main(void)
// {
//     int num = 42;
//     t_list *nodo = ft_lstnew(&num);
//     printf("Valor: %d\n", *(int *)nodo->content);
//     free(nodo);
// }