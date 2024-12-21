#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int ft_putstr(char *s);
int ft_putchar(int c);
int ft_putnbr(int i);
int ft_puthex(unsigned long i, char c);
int ft_putunbr(unsigned int i);
int ft_printf(const char *s, ...);
#endif
