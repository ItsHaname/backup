/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:14:13 by hait-bah          #+#    #+#             */
/*   Updated: 2025/08/05 14:40:23 by hait-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*malloc_word(char *str, char *charset)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	while (str[len] && !is_separator(str[len], charset))
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	i;
	int	in_word;

	count = 0;
	i = 0;
	in_word = 0;
	while (str[i])
	{
		if (is_separator(str[i], charset))
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		in_word;
	char	**result;

	i = 0;
	j = 0;
	in_word = 0;
	result = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!result)
		return (NULL);
	while (str[i])
	{
		if (!is_separator(str[i], charset) && in_word == 0)
		{
			result[j++] = malloc_word(&str[i], charset);
			in_word = 1;
		}
		else if (is_separator(str[i], charset))
			in_word = 0;
		i++;
	}
	result[j] = NULL;
	return (result);
}

/*
int	main(void)
{
	char	*str = "Hanane*--*Hanane*--*AIT*--*BAH";
	char	*charset = "*--*";
	char	**result;
	int		i;

	result = ft_split(str, charset);
	if (!result)
		return (1);
	i = 0;
	while (result[i])
	{
		printf("Mot %d : %s\n", i, result[i]);
		i++;
	}
	free_arr(result);
	return (0);
}
*/
