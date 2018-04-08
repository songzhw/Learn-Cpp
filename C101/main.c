#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pointer101() {
    int b = 55;
    printf("%d, %d\n", b, *&b); //=> 55, 55
    printf("%p, 0x%p\n", &b, &b); //=> 0x7ffee13abf68, 0x0x7ffee13abf68

    int *p1 = &b;
    float f = 23.1;
    float *p2 = &f;
    char c = 'g';
    char *p3 = &c;
    printf("%d %d %d\n\n", sizeof(p1), sizeof(p2), sizeof(p3)); //=>8, 8, 8

    int a = 55;
    int *p = &a;
    printf("%p %p %d \n", p, &a, *p); //=> 0x7ffee4446f3c 0x7ffee4446f3c 55
    a = 66;
    printf("%p %p %d \n", p, &a, *p); //=> 0x7ffee4446f3c 0x7ffee4446f3c 66

    return 0;
}

int pPlusPlus() { // c中声明数据不是用 double[] aryF;
    double aryD[3] = {1.1, 2.5, 4.0};
    double *pD = aryD;
    printf("size of a pointer is %d\n", sizeof(pD)); // size of a pointer is 8
    printf("size of a doble is %d\n", sizeof(double)); // size of a doble is 8

    printf("(01) %p || %f\n", pD, (*pD));  // (01) 0x7ffeef7d9f50 || 1.100000
    pD = pD + 1;
    printf("(02) %p || %f\n", pD, (*pD));  // (02) 0x7ffeef7d9f58 || 2.500000 (p++后, 果然是加了8)


    int aryI[3] = {1, 3, 7};
    int *pI = aryI;

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

int pointerConst() {
    int v = 55;
    const int c = 88;

    int *pv = &c;
    const int *pc = &c;

    pc = &v;
    pv = &v;
    printf("ret01 %d", *pc); //=> 55
    printf("ret02 %d", *pv); //=> 55

    int *const p3 = &v;
//    p3 = &c;

    return 0;
}

char *copy(char *src, char *dest) {
    if (src == NULL || dest == NULL) {
        return dest;
    }
    return NULL;
}

int allocateMemory() {
    int *p = (int *) malloc(sizeof(int));
    if (p == NULL) {
        printf("memory alloc error \n");
        exit(1);
    }
    // ....
    free(p);


    return 0;
}

int allocateInput() {
    int i = 0;
    int *p = (int *) malloc(2 * sizeof(int));

    for (i = 0; i < 2; i++, p++) {
        scanf("%d", p); //scanf时, 竟然是使用p. 这点很意外.
    }

    p = p - 2; //回到首地址
    for (i = 0; i < 2; i++, p++) {
        printf("%d \n", *p);
    }

    free(p);

    return 0;
}

void scanfDemo() {
    int a;
    scanf("%d", &a);
    printf("num2 = %d\n", a);
}

void charArySize() {
    char c1[] = "ab";
    char c2[] = {'a', 'b'};
    char *c3 = "abcd";
    printf("%d, %d\n", sizeof(c1), sizeof(c2)); //=> 3, 2
    printf("%d, %d\n", sizeof(c3), sizeof(*c3)); //=>8, 1
    printf("%c, %s\n", *c3, c3); //=> a, abcd

    printf("%s, %s, %s\n", c1, c2, c3); //=> ab, abab, abcd
    printf("%p, %p, %p\n", c1, c2, c3); //=> 0x7ffeebffef69, 0x7ffeebffef67, 0x103c01f91

}

void error_scanfString() {
    // 只能输入a, 没有printf打印
    char *c4 = NULL;
    scanf("%s", c4);
    printf("color %s and %s\n", "red", c4);
}

void correct_scanfString() {
    char c4[20];
    scanf("%s", c4);
    printf("color %s and %s\n", "red", c4);
}

void copyStr() {
    char dest[30];
    char *src = "you are the best!";
    int i = 0;
    dest[i] = *src;
    while (src[i] != '\0') {
        i++;
        src++;
        dest[i] = *src;
    }
    printf("result = %s\n", dest);
}

void getStringLength() {
    char *tmp, *src;
    src = (char *) malloc(128);
    scanf("%s", src);
    tmp = src;
    while (*tmp != '\0') {
        tmp++;
    }
    printf("size = %d \n", (tmp - src));
}

void stringLiberal() {
    char *s1 = "abc";
    char *s2 = "abc";
    printf("%p\n%p\n", s1, s2); //0x10a206fa4, 0x10a206fa4
}

void errorWhenPointerIsOutOfBoundary() {
    int a[] = {1, 2, 3, 4, 5}, *p, i;
    p = a;
    for (i = 4; i > -1; --i) printf("% d ", p[i]);
    printf("\n");
    p = &a[4];
    for (i = 4; i > -1; --i) printf("% d ", p[i]);
    printf("\n");
}

void formatOf_S_C() {
    int a[] = {1, 2, 3};
    char c[] = "abc";
    int *p1 = &a[1];
    char *p2 = &c[1];
    printf("%d, %c, %s \n", *p1, *p2, p2); //=> 2, b, bc
}

void copyString_error() {
    int i = 0;
    char t[] = "abcde";
    char *p;
    if ((p = (char *) malloc(strlen(t) + 1)) == NULL) {
        printf("内存分配错误!\n");
        exit(1);
    }
    while ((p[i] = t[i]) != '\0') i++;
    printf("% s\n", p);
    free(p);
}