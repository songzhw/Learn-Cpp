/*
#include "math.h"

int main() {
    double percetage = percent(65);
    printf(" In main: result = %f \n", percetage); //=> 0.650000
    printf("[math.h] int tmp11 = 10; || main() tmp11 = %d \n", tmp11);

    return 0;
}*/


#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    time_t time1 = time(NULL);
    printf("%d\n", time1); //=> 1523909831

    time_t* p = malloc(sizeof(time_t));
    time_t time2 = time(p);
    printf("%d, %d, %p\n", time2, *p, p); //=> 1523909945, 1523909945, 0x7f93825006e0
    free(p);

    return 0;
}

