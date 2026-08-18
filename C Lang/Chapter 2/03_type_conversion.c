#include <stdio.h>

int main()
{

    int a, b;
    a = 9;
    b = 2;
    float c;
    c = a/b;
    printf("The value of %d divided by %d is %f", a, b, c);

    return 0;
}
/*
   division of two integers will always give an integer value according 
   to C language ie old language. If you want to get a float value, then one of the operands must be a float or all can be also. For example, if you write c = 9/2.0 or c = 9.0/2, then the result will be a float value.
*/

#include <stdio.h>

int main()
{
    float a = 9;
    int b = 2;
    float c = a / b;
    printf("The value of %f divided by %d is %f", a, b, c);

    return 0;
}
/* 

if you assign decimal value to an integer variable, then the decimal part will be truncated 
and only the integer part will be stored in the variable. For example, if you write int a = 9.5, then the value of a will be 9.

*/