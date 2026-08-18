/*#include<stdio.h>

int main(){
    int i = 0;
    while(i<10){

    printf("The value of i is %d\n", i);

    i++;
    }

    return 0;
}
*/
 // if we remove i++ or i = i + 1  incrementing operations it will act as an infinite loop

// infinite loop can also work like this ie adding a true & unrelated value

#include<stdio.h>

int main(){
    int i = 0;
    while(2<10){
        printf("Value of i is %d\n", i);   // hence 2<10 is a true value but not related to i ie input
             i++;                              // so that condition will meet always and it will end up as infinite loop and always increasing a number
    }

    return 0;
}