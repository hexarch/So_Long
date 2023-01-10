/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:59:27 by alcelik           #+#    #+#             */
/*   Updated: 2023/01/04 14:01:35 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*final;
	int		i;

	i = 0;
	final = (char *) malloc(ft_strlen(s1) + 1);
	if (!final)
		return (0);
	while (*(s1 + i))
	{
		*(final + i) = *(s1 + i);
		i++;
	}
	*(final + i) = 0;
	return (final);
}
