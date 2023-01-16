/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdursun <sdursun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:31:37 by sdursun           #+#    #+#             */
/*   Updated: 2023/01/16 18:08:54 by sdursun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	p = malloc(len * sizeof(char));
	if (!p)
		return (0);
	ft_strlcpy(p, s1, ft_strlen(s1) + 1);
	ft_strlcat(p, s2, len);
	return (p);
}
