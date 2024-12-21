#include "ft_printf.h"

int ft_puthex(unsigned long i, char c)
{
    int point;

    point = 0; 
    if (i > 15)
        point += ft_puthex((i / 16), c);
    point += ft_putchar(i % 16 - 10 + c);
    return (point);
}
