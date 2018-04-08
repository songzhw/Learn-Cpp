#include <stdio.h>

#define NUM 100.0

double percent(int);

void main() {
    double percetage = percent(85);
    printf(" In main: result = %f \n", percetage); //=> 0.850000
}

double percent(int arg) {
    return arg / NUM;
}