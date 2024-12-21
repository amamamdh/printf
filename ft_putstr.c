#include "ft_printf.h"

int ft_putstr(char *s)
{
    int i;

    if (s == NULL)
        return(write(1, "(null)", 6));
    i = 0;
    while (s[i])
        write (1, &s[i++], 1);
    return (i);
}