#ifndef FUNC_PTR
#define FUNC_PTR

#include<stdio.h>
#include<stdlib.h>

void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
