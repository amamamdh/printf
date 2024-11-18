#include "libftprintf.h"

int ft_printf(const char *s, ...)
{
    va_list arg;
    int     point;

    point = 0;
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
    char *s;
    s =   NULL;
    ft_printf("%s  %s\n",s, "zbi");
    printf("%s  %s\n",s, "zbi");
}