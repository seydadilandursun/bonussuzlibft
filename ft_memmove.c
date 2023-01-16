/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdursun <sdursun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:29:58 by sdursun           #+#    #+#             */
/*   Updated: 2023/01/16 18:07:53 by sdursun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*ret;

	if (!dst && !src)
		return (0);
	ret = dst;
	if (dst > src)
	{
		while (len > 0)
		{
			*((char *) dst + len - 1) = *((char *) src + len - 1);
			len--;
		}
	}
	else
	{
		while (len)
		{
			*((char *) dst++) = *((char *) src++);
			len--;
		}
	}
	return (ret);
}
