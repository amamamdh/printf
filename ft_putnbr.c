#include "libftprintf.h"

int ft_putnbr(int long i)
{
    int point;

    point = 0;
    if (i < 0)
    {
        write(1, "-", 1);
        point++;
        i = -i;
    }
    if (i > 9)
        point += ft_putnbr(i / 10);
    point += ft_putchar((i % 10) + '0');
    return(point);
}