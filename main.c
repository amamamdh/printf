# include "ft_printf.h"
# include <stdio.h>
# include <limits.h>




int main(void)
{
    // printf(" %d",printf("%p ", ULONG_MAX));
    // printf("\n");
    // ft_printf(" %d",ft_printf("%p ", ULLONG_MAX ));
    printf("%d\n",printf("%d\n" ,  INT_MAX + 1));
    ft_printf("%d",(ft_printf("%d\n", INT_MAX + 1)));
}