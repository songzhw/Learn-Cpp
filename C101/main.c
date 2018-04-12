#include "math.h"

//void main() {
//    double percetage = percent(65);
//    printf(" In main: result = %f \n", percetage); //=> 0.650000
//}


int *sp(int []);

int main() {
    int a[3] = {1, 3, 5}, i, *p;
    for (i = 0; i < 3; i++) printf("% d ", a[i]);
    printf("\n"); //=> 1 3 5 (可预测)
    p = sp(a);
    for (i = 0; i < 3; i++) printf("% d ", *(p + i));
    printf("\n"); //=> 3 0 0 (不可预测)
    return 0;
}

int *sp(int s[]) {
    int b[3];
    b[0] = 2 + s[0];
    b[1] = 4 + s[1];
    b[2] = 6 - s[2] + b[1];
    return b;
}
