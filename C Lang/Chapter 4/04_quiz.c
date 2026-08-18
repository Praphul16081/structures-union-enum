/*Write a program to print natural numbers from 10 to 20 when initial loop counter is
initialized to 0.
The loop counter need not be int, it can be float as well
*/

/* #include<stdio.h>

int main(){
    int i = 10;
    while(i<=20){   // can also be written as i<21 because it will terminate just before equality
        printf("%d\n", i);
        i++;
   }

    return 0;
} */
/* But according to ques i=0 ,method no 2 */

#include<stdio.h>

int main(){
   int i = 0;
   while(i<=20){
    if(i>= 10){
        printf("%d\n", i);
    }
    i++;  // incrementing operator is nested under whileloop func so that moment it will reach 10 then (if) func under while will start working
   }




    return 0;
}