
#include "includes/ft.h"

int	main(void)
{
#include <stdio.h>
	ft_putchar('a');
	ft_putstr("\n");
	ft_putstr("hello");
	printf("len: %d\n", ft_strlen("hello"));
	int a = 4;
	int b = 5;
	ft_swap(&a, &b);
	printf("a: %d\nb: %d\n", a, b);
	printf("cmp: %d\n", ft_strcmp("hello", "wordl"));
}
