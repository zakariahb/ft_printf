#include "ft_printf.h"
#include "libc.h"
int main() {
	int i = 9;
	int *p = &i;
    ft_printf("%p\n", p);  // Outputs: 42 hello 100
    printf("%p\n",p);  // Outputs: 42 hello 100
    return 0;
}