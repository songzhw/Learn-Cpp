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

int main() {
    int num1 = atoi("230");     //=> 230
    int num2 = atoi("240 a");   //=> 240
    int num3 = atoi("ab250 d"); //=> 0
    int num4 = atoi("260a3d");  //=> 260
    printf("%d, %d, %d, %d\n", num1, num2, num3, num4);

    char nums[] = "2001 60c0c0 -1101110100110100100000 0x6fffff";
    char *pEnd;
    long int li1, li2, li3, li4;
    li1 = strtol(nums, &pEnd, 10);   //=> 2001
    li2 = strtol(pEnd, &pEnd, 16);   //=> 6340800
    li3 = strtol(pEnd, &pEnd, 2);    //=> -3624224
    li4 = strtol(pEnd, NULL, 0);     //=> 7340031
    printf("转换成10进制后: %ld、%ld、%ld、%ld\n", li1, li2, li3, li4);


    return 0;
}

