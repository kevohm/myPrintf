#include "main.h"
#include <stdio.h>


void print_c(va_list a){
    //differentiate int and char
    _putchar(va_arg(a, int));
}

void print_s(va_list a)
{
    //check for non-strings
    char *p = va_arg(a, char *);
    if(p == NULL){
        return;
    }
    while (*p) //"name" 0 = false 1 = true
    {
        _putchar(*p);
        p++;
    }
    _putchar('\0');
}
// modify to accommodate 10, 100, 1000...
void print_i(va_list a)
{
    int d = va_arg(a, int);

    _putchar(48 + d);
}