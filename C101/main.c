#include <stdio.h>

int main() {
    int b = 55;
    printf("%d, %d\n", b, *&b); //=> 55, 55
    printf("%p, 0x%p\n", &b, &b); //=> 0x7ffee13abf68, 0x0x7ffee13abf68

    int* p1 = &b;
    float f = 23.1;  float* p2 = &f;
    char c = 'g';    char* p3 = &c;
    printf("%d %d %d\n\n", sizeof(p1), sizeof(p2), sizeof(p3)); //=>8, 8, 8

    int a = 55; int* p = &a;
    printf("%p %p %d \n", p, &a, *p); //=> 0x7ffee4446f3c 0x7ffee4446f3c 55
    a = 66;
    printf("%p %p %d \n", p, &a, *p); //=> 0x7ffee4446f3c 0x7ffee4446f3c 66


    return 0;
}