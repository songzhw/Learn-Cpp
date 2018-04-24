
#include "math.h"

// 前加一个typedef关键字，这样就定义一个名为pFunc函数指针类型，而不是一个pFunc变量。
typedef double (*pFunc)(double, double);

double getMax(double a, double b) {
    return a > b ? a : b;
}

double getMin(double a, double b) {
    return a < b ? a : b;
}

#define pInt int*
typedef int *pOne;

int main() {
    double percetage = percent(65);
    printf(" In main: result = %f \n", percetage); //=> 0.650000
    printf("[math.h] int tmp11 = 10; || main() tmp11 = %d \n", tmp11);


    pFunc p = getMax;
    printf("max = %lf\n", (*p)(1.2, 3.4)); // p(1, 2)与 (*p)(1, 2)都行
    p = getMin;
    printf("min = %lf\n", (*p)(1.2, 3.4));

    pInt a, b;   // a是int*, b是int. 这时宏定义被替换成了int* a, b;
    b = 10;    a = &b;
    pOne c, d;  // c, d全是int*的指针类型
    c = &b;    d = &b;

    return 0;
}




