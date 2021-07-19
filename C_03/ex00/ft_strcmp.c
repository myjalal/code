int	ft_strcmp(char *s1, char *s2)
{
	int	count;
	int	diff;

	diff = 0;
	count = 0;
	while (s1[count] != '\0')
	{
		if (s1[count] == s2[count])
			count++;
		else
		{
			diff = s1[count] - s2[count];
			return (diff);
		}
	}
	diff = s1[count] - s2[count];
	return (diff);
}
