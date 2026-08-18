/*  A do while loop is executed:
    a. At least once.
    b. At least twice.
    c. At most once.
 */


 /*  #include<stdio.h>

int main(){
    int i = 5;
    int n = 4;
    do{
        printf("Value of i is %d\n", i);
        i++;
    }while(i<n);
// even if not true but do whileloop will always run once
    return 0;
} */


#include<stdio.h>

int main(){
    int i = 3;
    int n = 4;
    do{
        printf("Value of i is %d\n", i);
        i++;
    }while(i<=n);
    



    return 0;
}