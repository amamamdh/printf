#include "libftprintf.h"

int ft_putpoint(unsigned long i)
{
    int point;

    point = 0;
    point += write (1, "0x", 2);
    point += ft_puthex(i, 'x');
    return (point);
}