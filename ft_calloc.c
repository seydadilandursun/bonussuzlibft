/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdursun <sdursun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:24:57 by sdursun           #+#    #+#             */
/*   Updated: 2023/01/16 18:03:28 by sdursun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*space;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (0);
	space = malloc(count * size);
	if (!space)
		return (0);
	ft_memset(space, 0, count * size);
	return (space);
}
