
#include "StringTrap.h"
#include <stdio.h>

void appendString(char* s1, char* s2) {
    char result[100];
    strcpy(result, s1);
    strcat(result, s2);
    printf("append result = %s \n", result);
}
