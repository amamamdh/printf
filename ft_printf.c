#include "ft_printf.h"

int ft_type(char c, va_list arg)
{
    int point;

    point = 0;
    if (c == 's')
        point += ft_putstr(va_arg(arg, char *));
    else if (c == 'c')
        point += ft_putchar(va_arg(arg, int));
    
    else if (c == 'd' || c == 'i')
        point += ft_putnbr(va_arg(arg, int));
    else if (c == 'u')
        point += ft_putunbr(va_arg(arg, int));
    else if (c == 'x' || c == 'X')
        point += ft_puthex(va_arg(arg, unsigned int), c - ('X' - 'A'));
    else if (c == 'p')
    {
        point += write (1, "0x", 2);
        point += ft_puthex((unsigned long)va_arg(arg, void *), 'a');
    }
    else
        point += ft_putchar(c);
    return (point);
}



int ft_printf(const char *s, ...)
{
    va_list arg;
    int     point;

    point = 0;
    if (!s)
        return (-1);
    va_start(arg, s);
    while (*s)
    {
        if (*s == '%')
            {
                s++;
                if (*s == 0)
                    break;
                point += ft_type(*s, arg);
            }
        else
            point += ft_putchar(*s);
        s++;
    }
    va_end(arg);
    return (point);
}
