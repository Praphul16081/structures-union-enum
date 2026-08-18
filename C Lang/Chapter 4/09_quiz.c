/*
Write a program to print first 'n' natural numbers using for loop.
*/


#include<stdio.h>

int main(){

            int n;

            printf("Enter any natural number\n");
            scanf("%d", &n);

            printf("Following natural numbers are\n");

              for( int i = 1;i<=n;i++){
                printf("%d\n", i);
              }



    
    return 0;
}