/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbertin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:47:37 by jbertin           #+#    #+#             */
/*   Updated: 2022/11/07 12:47:39 by jbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *string, int c)
{
	int	i;

	i = 0;
	if ((char)c == string[i])
		return ((char *)string);
	while ((char)c != string[i])
	{
		if (!string[i])
			return (0);
		i++;
	}
	return ((char *)string + i);
}
