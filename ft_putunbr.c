#include "libftprintf.h"

int ft_putunbr(unsigned long i)
{
    int point;

    point = 0;
    if(i > 9)
        point += ft_putunbr(i / 10);
    point += ft_putchar ((i % 10) + '0');
    return (point);
}