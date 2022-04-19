#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct node{
    char *p; /*  % c */
    void (*f)(va_list);
} _node_;

void _printf(char *format, ...);

void print_c(va_list a);

void print_s(va_list a);

void print_i(va_list a);

int _putchar(char c);

#endif