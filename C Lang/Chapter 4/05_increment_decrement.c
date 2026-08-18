#include<stdio.h>

int main(){
   int i = 5;
    printf("The value of i is %d\n", i);

    i = i + 5; //10 just a way to modify a little
    printf("The value of i is %d\n", i);

    /*   i++; // 11 '++' used to increased by one
    printf("The value of i is %d\n", i);

    ++i; // 11 ie output is same but both inc op work differently
    printf("The value of i is %d\n", i);  */

    printf("The value of i is %d\n", ++i); // this used to increase first and then print
                                           // suppose this will give increment output
                                           // whereas (i++) will'nt
                                           //printf("The value of i is %d\n", i++);



/* this implies 

i++ prints i first and then increments i (Post increment operator)
++i increments i first and then prints i (Post increment Operator)


*/

printf("The value of i is %d\n", i);   // now after the increment op this type of command will show the final latest execution only

i +=2; // is same as i = i + 2
printf("The value of i is %d\n", i);

// similarly 
 /*
  -= subtract and assign

int a = 10;
a -= 3;   // same as a = a - 3;
printf("%d\n", a);  // 7

  *= multiply and assign

int a = 10;
a *= 3;   // same as a = a * 3;
printf("%d\n", a);  // 30

  /= divide and assign
   
int a = 10;
a /= 3;   // same as a = a / 3;
printf("%d\n", a);  // 3 (integer division, truncates)


  %= modulus and assign

  int a = 10;
a %= 3;   // same as a = a % 3;
printf("%d\n", a);  // 1 (remainder of 10/3)


int i = 5;
i++;   // post-increment: i = i + 1  -> 6
i--;   // post-decrement: i = i - 1  -> 5
++i;   // pre-increment
--i;   // pre-decrement


int i = 5;
printf("%d", i++);  // prints 5, then i becomes 6
printf("%d", ++i);  // i becomes 7, then prints 7
 
 
 
 
 
 
 */





    return 0;
}