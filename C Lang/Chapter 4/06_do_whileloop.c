/*  #include<stdio.h>

int main(){
    int i = 5;
    while(10<5){
        printf("This never prints\n");   // will not run because not true

    }

      do{
            printf("This will print only once\n");
        }while( 10<5);  // not true but will run once
    
    return 0;
}
*/
/*
Unlike a regular while loop, which checks the condition before running the code, 
a do-while loop checks it after. This means the loop body always runs at least once,
even if the condition is false from the start.

*/

// If statement is true then it works same as whileloop


#include<stdio.h>

int main(){
    int a = 0;

do{
    printf("Value of this number is %d\n ", a);
    a++;
}while(a<5);




    return 0;
}
