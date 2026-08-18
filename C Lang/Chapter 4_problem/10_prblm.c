/*  Write a program to check whether a given number is prime or not using while loop.
*/

#include<stdio.h>

int main(){
    int a;
    int prime = 0;
    int i = 2;

      printf("Enter any natural number\n");
      scanf("%d", &a);
    if(a == 0 || a == 1){
        prime = 1;
    }

    else{


      while(i<a){   // number divisible by 1 or itself only is prime

        if(a%i==0){
            prime = 1;
            break;
        }
    i +=1;    // make sure to list this under while not if :)

      }
    }
    
    if(prime){
        printf("%d is not prime", a);
    }
    else{
        printf("%d is prime", a);
    }

    return 0;
}