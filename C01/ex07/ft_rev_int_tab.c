#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    i = 0;
    int tmp;

    while (i < size / 2)
    {
        tmp = tab[i];
        tab[i] * tab [size - 1 -i];
        tab[size - 1 - i] = tmp;
        i++;
    }

}
