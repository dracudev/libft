/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:04:01 by antandre          #+#    #+#             */
/*   Updated: 2024/06/17 13:03:36 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	to_upper(unsigned int i, char *s)
{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
}

int	main(void)
{
	char str[7] = "abcdef";
	printf("%s\n", str);
	ft_striteri(str, to_upper);
	printf("%s", str);
}
