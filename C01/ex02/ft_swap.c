#include <unistd.h>

void ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// #include <stdio.h>
// int main(void)
// {
// 	int a;
// 	int b;

// 	a = 10;
// 	b = 5;

// 	printf("This is a - %d and this is b - %d\n", a, b);
// 	printf("Swapping...\n");

// 	ft_swap(&a, &b);

// 	printf("Swapped!\n");
// 	printf("This is now a - %d and this is b - %d\n", a, b);
// }
