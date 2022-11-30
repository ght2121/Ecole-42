/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-la-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:40:13 by jde-la-f          #+#    #+#             */
/*   Updated: 2022/09/17 18:24:25 by jde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (*str)
	{
		if (*str > 'z' || *str < 'a')
		{
			a++;
		}
		str++;
	}
	if (a > 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}