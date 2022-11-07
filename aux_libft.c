/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_libft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:19:47 by rmassiah          #+#    #+#             */
/*   Updated: 2022/11/07 19:19:52 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*arr;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	arr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!arr)
		return (NULL);
	while (s1[i])
	{
		arr[i] = s1[i];
		i++;
	}
	while (s2[j])
		arr[i++] = s2[j++];
	arr[i] = '\0';
	return (arr);
}

long int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	num;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	sign = 1;
	if (str[i] == '-')
			sign = sign * (-1);
	if (str[i] == '-' || str[i] == '+')
		i++;
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (sign * num);
}

static int	ft_count(const char *str, char c)
{
	int	word;
	int	eval;

	word = 0;
	eval = 0;
	while (*str)
	{
		if (*str != c && eval == 0)
		{	
			eval = 1;
			word++;
		}
		else if (*str == c)
			eval = 0;
		str++;
	}
	return (word);
}

static char	*tab_fill(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc (((end - start) + 1) * sizeof(char));
	if (!word)
		return (0);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**tab;

	tab = malloc((ft_count((char *)s, c) + 1) * sizeof (char *));
	if (!s || !tab)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen((char *)s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen((char *)s)) && index >= 0)
		{
			tab[j++] = tab_fill(s, index, i);
			index = -1;
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}
