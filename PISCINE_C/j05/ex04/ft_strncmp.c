/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassi-f <malikfassifihri@gmail.co>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/23 19:56:11 by mfassi-f          #+#    #+#             */
/*   Updated: 2013/07/23 20:47:14 by mfassi-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	b;
	int	i;

	i = 0;
	b = 0;
	while(*s1 != '\0' && *s2 != '\0' && b == 0 && i != n)
	{
		b = *s1 - *s2;
		if(b == 0)
		{
			s1++;
			s2++;
			i++;
		}
	}
	b = *s1 - *s2;
	return(b);
}