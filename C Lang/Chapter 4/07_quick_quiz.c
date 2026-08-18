/*
Write a program to print first 'n' natural numbers using for loop.(Input  = 4)
*/


#include<stdio.h>

int main(){
    int n,i = 1;
    printf("Enter any natural number\n");
    scanf("%d", &n);
    printf("The following natural numbers are\n");

    do{
    
        printf("%d\n", i);
        i++;

    }while(i<=n);
    


    return 0;
}