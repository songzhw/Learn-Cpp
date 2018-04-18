/*
#include "math.h"

int main() {
    double percetage = percent(65);
    printf(" In main: result = %f \n", percetage); //=> 0.650000
    printf("[math.h] int tmp11 = 10; || main() tmp11 = %d \n", tmp11);

    return 0;
}*/


#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <assert.h>

int vargsDemo(int count, int b, ...){
    va_list  vargs;
    va_start(vargs, b);

    int i = 0;
    for(i = 0; i < count; i++) {
        va_arg(vargs, double); //这就只能转成double了
    }

    va_end(vargs);
}

void onPause(){
    printf("onPause()\n");
}
void onDestroy(){
    printf("onDestroy()\n");
}

int main() {
    vargsDemo(3, 0, 23.0, 23.3, 23.4);

    int a = 20;
    assert( a == 20); // assert( a == 20)

    char cmd[200] = "ls -l";
    system(cmd);

    printf("PATH : %s\n", getenv("PATH"));
    printf("HOME : %s\n", getenv("HOME"));
    printf("ROOT : %s\n", getenv("ROOT"));

    printf("exiting ...\n");
    atexit(onPause);
    atexit(onDestroy);

    FILE* fp = fopen( "nofile.txt","r" );
    if(fp == NULL) {
        exit(0);
    }
    printf("end ...");


    return 0;
}

