#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
}
// #include <stdio.h>

// int main(void)
// {
//     int a;
//     int b;
//     int div;
//     int mod;

//     a = 10;
//     b = 5;

//     printf("This is value a - %d and this is value b - %d\n", a, b);
//     printf("Calculating...\n");
    
//     ft_div_mod(a, b, &div, &mod);

//     printf("Done!\n");
//     printf("The result is %d and the modulus is %d", div, mod);
// }