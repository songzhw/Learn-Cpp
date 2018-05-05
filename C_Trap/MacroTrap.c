
#include "MacroTrap.h"

void fakeFun() {
    int a = 13;
    my_int b = 2;
    int c = -11;
    printf("abs(13-2) = %d \n", abs(a - b));
    printf("abs2 = %d \n", abs(11) + 1);
//    printf("abs2 = %d \n", abs(-11) + 1);

}