/*  Write a program to check whether a given number is prime or not using do while loop.
*/

#include<stdio.h>

int main(){
    int prime = 0;
    int i = 2;
    int a;

    printf("Enter any natural number\n");
      scanf("%d", &a);

      if(a == 0 || a == 1){
        prime = 1;
      }

    else{

        do{
            if(a%i==0 && a != 2){  // do whileloop has different features so have to modify a little
                prime = 1;
                break;
            }

            i +=1;

        }while(i < a);
    }
    
    if(prime){
        printf("%d is not prime", a);
    }

    

        else{
            printf("%d is prime", a);
        }


    return 0;
}