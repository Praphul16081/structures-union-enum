/*  Write a program to check whether a given number is prime or not using for loops.
*/

#include<stdio.h>

int main(){
    int prime = 0;
    int a;

    printf("Enter any whole number\n");
    scanf("%d", &a);
      
        if(a == 0 || a == 1){
            prime = 1;
        }

        else{

       for(int i = 2;i<a;i++){    // number divisible by 1 or itself only is prime


           if(a%i==0){
            prime = 1;
            break;               // why to run unnecessary loop,if one condition is matched only .

           }
       }
    }
    if(prime){
        printf("%d is not prime\n", a);
    }
    else{
        printf("%d is prime\n", a);
    }


    
    return 0;
}