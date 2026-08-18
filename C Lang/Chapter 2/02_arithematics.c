
#include<stdio.h>

int main(){

    int a = 4;
    int b = 3;
    int c = a + b;
    printf("The value a is %d and the value of b is %d and the sum is %d", a, b, c);

// Modulus operator is used to get the remainder of a division

    printf("\nThe remainder when a is divided by b is : %d", a%b);

 /*
 this does not work for exponentiation in C
 int d = a^b;
 
 */



    return 0;
}