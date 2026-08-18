#include <stdio.h>

int main()
{
    int a = 12345;
    printf("The value of a%97 is %d", a % 97);

    return 0;
} // If output is zero then it is divisible by given number ie in this case 97. 
 // If output is not zero then it is not divisible by given number.
 