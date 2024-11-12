#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>
#include <unistd.h>

int ft_putstr(char *s);
int ft_putchar(int c);
int ft_putpoint(unsigned long i);
int ft_putnbr(int long i);
int ft_puthex(unsigned long i, char c);
int ft_putunbr(unsigned long i);
int ft_printf(const char *s, ...);
int ft_print(char c, va_list arg);
#endif
