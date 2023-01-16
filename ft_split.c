/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdursun <sdursun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:11:35 by sdursun           #+#    #+#             */
/*   Updated: 2023/01/16 18:08:23 by sdursun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	if_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static size_t	len_word(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != '\0')
	{
		if (*s != c && (s[1] == '\0' || s[1] == c))
			len++;
		s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	**ret;

	if (!s)
		return (0);
	len = len_word(s, c);
	ret = malloc(sizeof(char *) * len +1);
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (*s == c && *s != '\0')
			s++;
		ret[i] = malloc(sizeof(char) * if_word_len (s, c) + 1);
		j = 0;
		while (*s != c && *s != '\0')
			ret[i][j++] = *s++;
		ret[i][j] = '\0';
		i++;
	}
	ret[i] = NULL;
	return (ret);
}
