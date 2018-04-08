#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
    int a[3][3];
    a[0][0] = 128;
    printf("%p %p \n", a, &a[0][0]); //=> 0x7ffee85b5f40 0x7ffee85b5f40
    printf("%p %p \n", &a[0], a[0]); //=> 0x7ffee85b5f40 0x7ffee85b5f40
    printf("%d \n", *a[0]);          //=> 128

    char strs[2][12] = {"Turbo C", "Visual C"};
}