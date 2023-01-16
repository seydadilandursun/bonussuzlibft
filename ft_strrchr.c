/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdursun <sdursun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:32:44 by sdursun           #+#    #+#             */
/*   Updated: 2023/01/16 18:09:37 by sdursun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	new_c;

	new_c = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == new_c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
