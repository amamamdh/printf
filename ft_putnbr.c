#include "ft_printf.h"

int ft_putnbr(int i)
{
    int point;
    long n = 0;

    point = 0;
    n  = (long)i;
    
    if (n < 0)
    {
        write(1, "-", 1);
        point++;
        n = -n;
    }
    if (n > 9)
        point += ft_putnbr(n / 10);
    point += ft_putchar((n % 10) + '0');
    return(point);
}