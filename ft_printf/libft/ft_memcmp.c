/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:59:27 by alcelik           #+#    #+#             */
/*   Updated: 2023/01/04 14:03:43 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dizi1, const void *dizi2, size_t boyut)
{
	size_t	i;

	i = 0;
	while (i < boyut)
	{
		if (((unsigned char *)dizi1)[i] != ((unsigned char *)dizi2)[i])
			return (((unsigned char *)dizi1)[i] - ((unsigned char *)dizi2)[i]);
		i++;
	}
	return (0);
}
