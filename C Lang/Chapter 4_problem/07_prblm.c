/*  Write a program to calculate the factorial of a given number using a for loop.
*/


#include<stdio.h>
 
 int main(){
    int a;
    int fac = 1;
    printf("Enter any natural number\n");
    scanf("%d", &a);

       for(int i = 1;i <= a;i++){
          fac *=i;  // fac = fac * i
          
       }
    
        printf("Factorial of this number is %d", fac);

    return 0;
 }