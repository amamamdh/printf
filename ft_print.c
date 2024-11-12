#include "libftprintf.h"

int ft_print(char c, va_list arg)
{
    int point;

    point = 0;
    if (c == 's')
        point += ft_putstr(va_arg(arg, char *));
    else if (c == 'c')
        point += ft_putchar(va_arg(arg, int));
    else if (c == 'p')
        point += ft_putpoint((unsigned long)va_arg(arg, void *));
    else if (c == 'd' || c == 'i')
        point += ft_putnbr(va_arg(arg, int));
    else if (c == 'u')
        point += ft_putunbr(va_arg(arg, unsigned int));
    else if (c == 'x' || 'X')
        point += ft_puthex(va_arg(arg, unsigned int), c);
    else if (c == '%')
        point += ft_putchar('%');
    else
        point += ft_putchar(c);
    return (point);
}

    
