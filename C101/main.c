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
    srand((unsigned int) time(NULL));
    printf("%d, %d, %d\n", rand(), rand(), rand());
    printf("%d, %d, %d\n", rand()%4, rand()%4, rand()%4);


    return 0;
}

