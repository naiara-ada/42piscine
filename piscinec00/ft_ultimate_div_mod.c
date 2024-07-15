#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}

int main()
{
	int x = 20;
	int y = 3;

	printf("Before: x = %d, y = %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("After: x = %d, y = %d\n", x, y);
	
	return 0;
}
