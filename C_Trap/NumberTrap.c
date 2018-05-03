#include <stdio.h>
#include "NumberTrap.h"

void decimalAndOctal() {
    int n1 = 13;
    int n2 = 013;
    printf("n1 = %d, n2 = %d \n", n1, n2);      //=> n1 = 13, n2 = 11
    printf("[8] n1 = %o, n2 = %o \n", n1, n2);  //=> n1 = 15, n2 = 13
}
