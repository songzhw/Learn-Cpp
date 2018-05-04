#include "NumberTrap.h"

void decimalAndOctal() {
    int n1 = 13;
    int n2 = 013;
    printf("n1 = %d, n2 = %d \n", n1, n2);      //=> n1 = 13, n2 = 11
    printf("[8] n1 = %o, n2 = %o \n", n1, n2);  //=> n1 = 15, n2 = 13
}

/** not working ?! */
bool isNotOverLimits(int a) {
    if (a > INT_MAX) { return false; }
    if (a < INT_MIN) { return false; }
    return true;
}

void intLimit(){
    // INT_MAX的值是  2147483647
    long num1 = INT_MAX + 10;
    long num2 = INT_MAX + 10L;
    printf("num is legal? (num = %ld) \n", num1); //=> -2147483639
    printf("num is legal? (num = %ld) \n", num2); //=> 2147483657
    printf("%d \n", isNotOverLimits(23));  //=> 1(true)
    printf("%d \n", isNotOverLimits(num2));//=> 1(true). 也为true, 这是因为Long强转为int了
}
