#include <stdlib.h>

int	ft_strlen(char	*c)
{
	int	i;
	
	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strcat(char *strs, char *sep)
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
		i++;
	}
	strs[len_strs + i] = 0;
	return (strs);
	
}
int		ft_lngh(int size, char **strs, char *sep)
{
	int i;
	int lng;
	
	i = 0;
	lng = 0;
	while (i < size)
	{
		lng = lng + ft_strlen(strs[i]);
		i++;
	}
	lng = lng + (size - 1) * ft_strlen(sep) + 1;
	return (lng);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*string;
	
	if (size == 0)
	{
		string = malloc(sizeof(char));
		*string = 0;
		return (string);
	}
	string = (char *)malloc(sizeof(char) * ft_lngh(size, strs, sep));
	if (!string)
		return (0);
	*string = 0;
	i = -1;
	while (++i < size)
	{
		ft_strcat(string, strs[i]);
		if (i < size - 1)
			ft_strcat(string, sep);
	}
	return (string);
}
