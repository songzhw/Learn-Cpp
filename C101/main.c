#include <stdio.h>

int pointer101() {
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

int pPlusPlus(){ // c中声明数据不是用 double[] aryF;
    double aryD[3] = {1.1, 2.5, 4.0};
    double* pD = aryD;
    printf("size of a pointer is %d\n", sizeof(pD)); // size of a pointer is 8
    printf("size of a doble is %d\n", sizeof(double)); // size of a doble is 8

    printf("(01) %p || %f\n", pD, (*pD));  // (01) 0x7ffeef7d9f50 || 1.100000
    pD = pD + 1;
    printf("(02) %p || %f\n", pD, (*pD));  // (02) 0x7ffeef7d9f58 || 2.500000 (p++后, 果然是加了8)


    int aryI[3] = {1, 3, 7};
    int* pI = aryI;

    printf("size of a pointer is %d\n", sizeof(pI)); // size of a pointer is 8
    printf("size of a int is %d\n", sizeof(int)); // size of a int is 4

    printf("(03) %p || %d\n", pI, (*pI));  // (03) 0x7ffee2e40f44 || 1
    pI = pI + 1;
    printf("(04) %p || %d\n", pI, (*pI));  // (04) 0x7ffee2e40f48 || 3 (这时p++后, 就只移4位)

/*
size of a pointer is 8
size of a doble is 8
(01) 0x7ffeed98ef50 || 1.100000
(02) 0x7ffeed98ef58 || 2.500000

 size of a pointer is 8
size of a doble is 4
(03) 0x7ffeed98ef44 || 1
(04) 0x7ffeed98ef48 || 3
 */
    return 0;
}

int main(){
    int v = 55;
    const int c = 88;

    int* pv = &c;
    const int* pc = &c;

    pc = &v;
    pv = &v;
    printf("ret01 %d", *pc); //=> 55
    printf("ret02 %d", *pv); //=> 55


    return 0;
}