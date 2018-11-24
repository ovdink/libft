/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 19:04:44 by sgendry           #+#    #+#             */
/*   Updated: 2018/11/22 19:53:54 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const	char *k;

	while (*s)
	{
		if (*s == c)
			k = s;
		s++;
	}
	return ((char *)k);
}
