#include<stdio.h>

int main(){
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));
    return 0;
} //%zu format specifier in C is used to print values of the size_t data type