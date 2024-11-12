#include "libftprintf.h"

int ft_puthex(unsigned long i, char c)
{
    int point;
    char *b;

    point = 0; 
    if (c == 'X')
    b = "0123456789ABCDEF";
    else
    b = "0123456789abcdef";
    if (i > 15)
        point += ft_puthex((i / 16), c);
    point += ft_putchar(b[(i % 16)]);
    return (point);
}