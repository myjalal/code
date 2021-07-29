#include <stdlib.h>
#include <stdio.h> // remove before submit !

int	ft_strlen(char	*c)
{
	int	i;
	
	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	ft_strcat(char *strs, char *sep)
{
	int	i;
	int	len_strs;
	int	len_sep;
	
	i = 0;
	len_strs = ft_strlen(strs);
	len_sep = ft_strlen(sep);
	
	while(sep[i])
	{
		strs[len_strs + i] = sep[i];
		i++
	}
	return (strs);
	
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size = 0; // taille de
	int		strs_size = 0;
	int		sep_size = 0;
	int		i;
	char	*string; //string final
	
	i = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		strs_size = ft_strlen(strs[i]) + strs_size;
		i++;
	}
	sep_size = ft_strlen(sep) * (size - 1);
	total_size = strs_size + sep_size;
	
	string = (* char)malloc(sizeof(*char) * total_size);
	i = -1;
	while (++i < total_size)
	{
		while(
	}
}

int main(void)
{
	int	size = 3;
	char	*str[] = {"abc", "hello", "world"};
	char	*sep;
	
	sep = "space";
	ft_strjoin(size, str, sep);
}
