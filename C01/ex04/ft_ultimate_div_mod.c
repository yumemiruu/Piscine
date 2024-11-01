#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}
// #include <stdio.h>

// int main(void)
// {
//     int a;
//     int b;

//     a = 10;
//     b = 5;

//     printf("This is value a - %d and this is value b - %d\n", a, b);
//     printf("Calculating...\n");
    
//     ft_ultimate_div_mod(&a, &b);

//     printf("Done!\n");
//     printf("The result is %d and the modulus is %d", a, b);
// }