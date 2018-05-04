
#include "StringTrap.h"

void appendString(char* s1, char* s2) {
//    char result[100];
    int len = strlen(s1) + strlen(s2) + 1; //注意, 这里得+1, 因为要放结尾符'\0'
    char* result = (char*) malloc(len);
    strcpy(result, s1);
    strcat(result, s2);
    printf("append result = %s \n", result);
    free(result);
}
