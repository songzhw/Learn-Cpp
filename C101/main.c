#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap( int, int); // 函数原型的声明

void main() {
    int a = 55, b = 66;
    swap(a, b);
    printf(" In main: a =% d, b =% d\n", a, b);
}

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf(" In swap: a =% d, b =% d\n", a, b);
}