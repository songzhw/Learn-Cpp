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
    clock_t startCpuTime = clock();
    // do something
    clock_t endCpuTime = clock();

    long timeSpent = (endCpuTime - startCpuTime) / CLOCKS_PER_SEC;
    printf("%ld\n", timeSpent);


    return 0;
}

