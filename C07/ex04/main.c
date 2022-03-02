#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	printf("42:%s\n", ft_convert_base(" 	--g", "0123456789abcdef", "0oneyvif"));
	printf("-2a:%s\n", ft_convert_base(" 	2147483647s", "0123456789", "01"));
}
