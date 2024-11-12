#include "libftprintf.h"

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
                point += ft_print(*s, arg);
            }
        else
            point += ft_putchar(*s);
        s++;
    }
    va_end(arg);
    return (point);
}
#include <stdio.h>
int main()
{
    ft_printf("hello worl%dd %s",-1337, NULL);

    printf("hello worl%dd %s", -1137, NULL);
}