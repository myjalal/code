int ft_is_prime(int nb)
{
	int npos;
	int nneg;
	
	npos = ((nb + 1) % 6);
	nneg = ((nb - 1) % 6);
	if (nb < 2 && nb >= 0)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (npos == 0 || nneg == 0)
		return (1);
	else
		return (0);
}
