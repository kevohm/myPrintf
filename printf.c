#include <stdio.h>
#include <stdarg.h>
#include "main.h"

void _printf(char *format, ...){

    // ("This is a %c", 3)

    va_list args;
    _node_ funct[] = {{"c", print_c}, {"s", print_s}, {"i", print_i}}; // p->"c", f->print_c
    int i = 0;

    va_start(args, format);

    while(*format){
        if(*format == '%'){
            format++;
            while (i<3){
                if(*format == *(funct[i].p)){
                    funct[i].f(args);
                }
                i++;
            }
        }else{
            _putchar(*format);
        }
        format++;
    }
    va_end(args);
}