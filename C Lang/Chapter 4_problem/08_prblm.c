#include<stdio.h>

int main(){
    int n;
    int fac = 1;
    int i =1;

    printf("Enter any natural number\n");
    scanf("%d", &n);

    while(i<=n){
        fac *=i++;
    }
    printf("Factorial of this number is %d", fac);





    return 0;
}